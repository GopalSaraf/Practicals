#pragma once

#include <algorithm>
#include <fstream>
#include <iostream>
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
            file << rollNo << "," << name << "," << division << "," << address
                 << "\n";
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

    static bool isStudentExistByRollNo(int rollNoToCheck) {
        file.open(filePath, ios::in);
        if (file.is_open()) {
            string stream;
            while (getline(file, stream)) {
                vector<string> data = split(stream);
                if (data.at(coloumns.at("rollNo")) ==
                    to_string(rollNoToCheck)) {
                    file.close();
                    return true;
                }
            }
        }
        file.close();
        return false;
    }

    static bool isStudentExistByName(string nameToCheck) {
        return getRollNoByName(nameToCheck) != -1;
    }

    static Student getStudentByRollNo(int rollNoToCheck) {
        Student student = Student();
        file.open(filePath, ios::in);
        if (file.is_open()) {
            string stream;
            while (getline(file, stream)) {
                vector<string> data = split(stream);
                if (data.at(coloumns.at("rollNo")) ==
                    to_string(rollNoToCheck)) {
                    student.setRollNo(rollNoToCheck);
                    student.setName(getDatabaseRemovableString(
                        data.at(coloumns.at("name"))));
                    student.setDivision(getDatabaseRemovableString(
                        data.at(coloumns.at("division"))));
                    student.setAddress(getDatabaseRemovableString(
                        data.at(coloumns.at("address"))));
                    break;
                }
            }
        }
        file.close();
        return student;
    }

    static Student getStudentByName(string nameToCheck) {
        return getStudentByRollNo(getRollNoByName(nameToCheck));
    }

    static bool deleteStudent(int rollNoToDel) {}

   private:
    static vector<string> split(string line, char seperator) {
        vector<string> splitted;
        string data = "";

        for (char cha : line) {
            if (cha == seperator) {
                splitted.push_back(data);
                data = "";
            } else {
                data += cha;
            }
        }
        splitted.push_back(data);
        return splitted;
    }

    static vector<string> split(string line) { return split(line, seperator); }

    static int getRollNoByName(string nameToCheck) {
        file.open(filePath, ios::in);
        if (file.is_open()) {
            transform(nameToCheck.begin(), nameToCheck.end(),
                      nameToCheck.begin(), ::tolower);
            string stream;
            while (getline(file, stream)) {
                vector<string> data = split(stream);
                string name =
                    getDatabaseRemovableString(data.at(coloumns.at("name")));
                transform(name.begin(), name.end(), name.begin(), ::tolower);

                if (name == nameToCheck) {
                    file.close();
                    return stoi(data.at(coloumns.at("rollNo")));
                }

                vector<string> splittedName = split(name, ' ');
                if (find(splittedName.begin(), splittedName.end(),
                         nameToCheck) != splittedName.end()) {
                    file.close();
                    return stoi(data.at(coloumns.at("rollNo")));
                }
            }
        }
        file.close();
        return -1;
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
