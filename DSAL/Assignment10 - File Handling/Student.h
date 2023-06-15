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
        takeNameInput();
        takeRollNoInput();
        takeDivisionInput();
        takeAddressInput();
    }

    void updateData() {
        char option;
        cout << endl << "What do you wanna update ?" << endl;
        cout << "a - Name (" << getName() << ")" << endl;
        cout << "b - Division (" << getDivision() << ")" << endl;
        cout << "c - Address (" << getAddress() << ")" << endl;
        cout << "d - None" << endl << endl;
        cout << "Your Option > ";
        cin >> option;
        cout << endl;

        switch (option) {
            case 'a':
                takeNameInput();
                break;
            case 'b':
                takeDivisionInput();
                break;
            case 'c':
                takeAddressInput();
                break;
        }
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

    void takeNameInput() {
        cout << "Enter name of student > ";
        cin.ignore();
        getline(cin, name);
    }

    void takeRollNoInput() {
        cout << "Enter roll no of student > ";
        cin >> rollNo;
    }

    void takeDivisionInput() {
        cout << "Enter division of student > ";
        cin >> division;
    }

    void takeAddressInput() {
        cout << "Enter address of student > ";
        cin.ignore();
        getline(cin, address);
    }

    void setRollNo(int rollNo) { this->rollNo = rollNo; }

    void setName(string name) { this->name = name; }

    void setDivision(string division) { this->division = division; }

    void setAddress(string address) { this->address = address; }

    int getRollNo() { return rollNo; }

    string getName() { return name; }

    string getDivision() { return division; }

    string getAddress() { return address; }

    operator bool() { return rollNo != 0; }
};
