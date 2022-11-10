#pragma once

#include <fstream>
#include <unordered_map>
#include <vector>

#include "StudentDatabase_fwd.h"
#include "Student_fwd.h"
using namespace std;

class StudentDatabase {
   private:
    static inline string filePath = "students.csv";
    static inline fstream file;

    static inline unordered_map<string, int> coloumns = {
        {"rollNo", 0}, {"name", 1}, {"division", 2}, {"address", 3}};

    static inline int coloumnSize = coloumns.size();

    static inline char seperator = ',';
    static inline char replacer = '_';

   public:
    static void addStudent(string rollNo, string name, string division,
                           string address) {
        file.open(filePath, ios::out | ios::app);
        if (file.is_open()) {
            file << rollNo << ", " << name << ", " << division << ", "
                 << address << "\n";
            file.close();
        }
    }

    static void addStudent(int rollNo, string name, string division,
                           string address) {
        addStudent(to_string(rollNo), name, division, address);
    }

    static void addStudent(Student student) {
        addStudent(getDatabaseAddableString(to_string(student.getRollNo())),
                   getDatabaseAddableString(student.getName()),
                   getDatabaseAddableString(student.getDivision()),
                   getDatabaseAddableString(student.getAddress()));
    }

    static bool isRollNoUnique(int rollNoToCheck) {
        file.open(filePath, ios::in);
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                vector<string> data = split(line);
                if (data.at(coloumns.at("rollNo")) == to_string(rollNoToCheck))
                    return false;
            }
            return true;
        }
        return false;
    }

   private:
    static vector<string> split(string line) {
        vector<string> splitted;
        string data;

        for (char cha : line) {
            if (cha == seperator) {
                splitted.push_back(data);
                data = "";
            } else {
                data += cha;
            }
        }
        return splitted;
    }

    static string getDatabaseAddableString(string str) {
        string databaseAddable = "";
        for (char cha : str) {
            if (cha == seperator)
                databaseAddable += replacer;
            else
                databaseAddable += cha;
        }
        return databaseAddable;
    }

    static string getDatabaseRemovableString(string str) {
        string databaseRemovable = "";
        for (char cha : str) {
            if (cha == replacer)
                databaseRemovable += seperator;
            else
                databaseRemovable += cha;
        }
        return databaseRemovable;
    }
};
