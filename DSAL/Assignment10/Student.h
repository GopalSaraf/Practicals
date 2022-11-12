#pragma once

#include <iostream>

#include "StudentDatabase_fwd.h"
#include "Student_fwd.h"
using namespace std;

class Student {
   private:
    int rollNo;
    string name;
    string division;
    string address;

   public:
    void setData() {
        cout << "Enter name of student > ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter roll no of student > ";
        cin >> rollNo;

        // while (true) {
        //     if (StudentDatabase::isRollNoUnique(
        //             rollNo)) {  // Validating roll number
        //         break;
        //     } else {
        //         cout << rollNo
        //              << " is already used previously. Roll number can not "
        //                 "be repeated."
        //              << endl;
        //         cout << "Enter valid roll number for student > ";
        //         cin >> rollNo;
        //     }
        // }

        cout << "Enter division of student > ";
        cin >> division;
        cout << "Enter address of student > ";
        cin.ignore();
        getline(cin, address);
    }

    void printDetails() {
        cout << endl;
        cout << "Student Informaton" << endl;
        cout << "Name      :  " << name << endl;
        cout << "Roll No   :  " << rollNo << endl;
        cout << "Division  :  " << division << endl;
        cout << "Address   :  " << address << endl;
        cout << endl;
    }

    void setRollNo(int rollNo) { this->rollNo = rollNo; }

    void setName(string name) { this->name = name; }

    void setDivision(string division) { this->division = division; }

    void setAddress(string address) { this->address = address; }

    int getRollNo() { return rollNo; }

    string getName() { return name; }

    string getDivision() { return division; }

    string getAddress() { return address; }
};
