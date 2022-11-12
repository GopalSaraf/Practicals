#pragma once

#include <algorithm>
#include <fstream>
#include <iomanip>
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
            file << getDatabaseAddableString(rollNo) << ","
                 << getDatabaseAddableString(name) << ","
                 << getDatabaseAddableString(division) << ","
                 << getDatabaseAddableString(address) << "\n";
            file.close();
        }
    }

    static void addStudent(int rollNo, string name, string division,
                           string address) {
        addStudent(to_string(rollNo), name, division, address);
    }

    static void addStudent(Student student) {
        addStudent(student.getRollNo(), student.getName(),
                   student.getDivision(), student.getAddress());
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

    static void deleteStudentByRollNo(int rollNoToDel) {
        string buffer = "";
        file.open(filePath, ios::in);
        if (file.is_open()) {
            string stream;
            while (getline(file, stream)) {
                vector<string> data = split(stream);
                if (data.at(coloumns.at("rollNo")) != to_string(rollNoToDel)) {
                    buffer += stream;
                    buffer += "\n";
                }
            }
            file.close();
            file.open(filePath, ios::out | ios::trunc);
            if (file.is_open()) {
                file << buffer;
            }
            file.close();
        }
    }

    static void deleteStudentByName(string nameToDel) {
        deleteStudentByRollNo(getRollNoByName(nameToDel));
    }

    static void updateStudentByRollNo(int rollNotoUpdate, string name,
                                      string division, string address) {
        string buffer = "";
        file.open(filePath, ios::in);
        if (file.is_open()) {
            string stream;
            while (getline(file, stream)) {
                vector<string> data = split(stream);
                if (data.at(coloumns.at("rollNo")) ==
                    to_string(rollNotoUpdate)) {
                    buffer += to_string(rollNotoUpdate);
                    buffer += ",";
                    buffer += getDatabaseAddableString(name);
                    buffer += ",";
                    buffer += getDatabaseAddableString(division);
                    buffer += ",";
                    buffer += getDatabaseAddableString(address);
                    buffer += "\n";
                } else {
                    buffer += stream;
                    buffer += "\n";
                }
            }
            file.close();
            file.open(filePath, ios::out | ios::trunc);
            if (file.is_open()) {
                file << buffer;
            }
            file.close();
        }
    }

    static void updateStudent(Student student) {
        updateStudentByRollNo(student.getRollNo(), student.getName(),
                              student.getDivision(), student.getAddress());
    }

    static void printAllStudents() {
        int rollNoLen = 10;
        int nameLen = 20;
        int divisionLen = 10;
        int addressLen = 30;
        cout << left << setw(rollNoLen) << "Roll No"
             << "  |  " << left << setw(nameLen) << "Name"
             << "  |  " << left << setw(divisionLen) << "Division"
             << "  |  " << left << setw(addressLen) << "Address" << endl;
        cout << string((rollNoLen), '-') << "  |  " << string((nameLen), '-')
             << "  |  " << string((divisionLen), '-') << "  |  "
             << string((addressLen), '-') << endl;
        file.open(filePath, ios::in);
        if (file.is_open()) {
            string stream;
            while (getline(file, stream)) {
                vector<string> data = split(stream);
                cout << left << setw(rollNoLen)
                     << getDatabaseRemovableString(
                            data.at(coloumns.at("rollNo")))
                     << "  |  " << left << setw(nameLen)
                     << getDatabaseRemovableString(data.at(coloumns.at("name")))
                     << "  |  " << left << setw(divisionLen)
                     << getDatabaseRemovableString(
                            data.at(coloumns.at("division")))
                     << "  |  " << left << setw(addressLen)
                     << getDatabaseRemovableString(
                            data.at(coloumns.at("address")))
                     << endl;
            }
        }
        file.close();
    }

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
