// Title : File Handling
// Problem Statement :
// Department maintains student’s database. The file contains roll number, name,
// division and address. Write a program to create a sequential file to store
// and maintain student data. It should allow the user to
// a) Create a student database
// b) Add a information of student
// c) Delete information of student
// d) Search and Display information of particular student.
//   i. If record of student does not exist an appropriate message is displayed.
//   ii. If student record is found it should display the student details.
// e) Display Record of All students in tabular from

// Program by : 23168 Gopal Saraf

#include <iostream>

#include "Student.h"
#include "StudentDatabase.h"

using namespace std;

int main() {
    while (true) {
        char option;
        string element;
        cout << endl << "Choose an option : " << endl;
        cout << "a - Add student in database" << endl;
        cout << "b - Update student from database" << endl;
        cout << "c - Delete student from database" << endl;
        cout << "d - Search for a student in database" << endl;
        cout << "e - Display all students in database" << endl;
        cout << "f - Exit Program" << endl << endl;
        cout << "Your Option > ";
        cin >> option;
        cout << endl;

        switch (option) {
            case 'a': {
                Student student = Student();
                student.setData();
                StudentDatabase::addStudent(student);
                cout << endl << "Student data saved in database." << endl;
                break;
            }
            case 'b': {
                string updateKey;
                Student student;
                cout
                    << "Enter Name OR Roll No of student you want to search > ";
                cin.ignore();
                getline(cin, updateKey);
                if (all_of(updateKey.begin(), updateKey.end(), ::isdigit)) {
                    int rollNo = stoi(updateKey);
                    if (StudentDatabase::isStudentExistByRollNo(rollNo))
                        student = StudentDatabase::getStudentByRollNo(rollNo);
                    else
                        cout << "No student exist with given roll no." << endl;
                } else {
                    if (StudentDatabase::isStudentExistByName(updateKey))
                        student = StudentDatabase::getStudentByName(updateKey);
                    else
                        cout << "No student exist with given name" << endl;
                }
                if (student) {
                    student.updateData();
                    StudentDatabase::updateStudent(student);
                    cout << endl << "Student data updated in database" << endl;
                }
                break;
            }
            case 'c': {
                string delKey;
                cout
                    << "Enter Name OR Roll No of student you want to delete > ";
                cin.ignore();
                getline(cin, delKey);
                if (all_of(delKey.begin(), delKey.end(), ::isdigit)) {
                    int rollNo = stoi(delKey);
                    if (StudentDatabase::isStudentExistByRollNo(rollNo)) {
                        StudentDatabase::deleteStudentByRollNo(rollNo);
                        cout << "Deleted student with roll no " << rollNo
                             << endl;
                    } else
                        cout << "No student exist with given roll no." << endl;
                } else {
                    if (StudentDatabase::isStudentExistByName(delKey)) {
                        StudentDatabase::deleteStudentByName(delKey);
                        cout << "Deleted student with name " << delKey << endl;
                    } else
                        cout << "No student exist with given name" << endl;
                }
                break;
            }
            case 'd': {
                string searchKey;
                cout
                    << "Enter Name OR Roll No of student you want to search > ";
                cin.ignore();
                getline(cin, searchKey);
                if (all_of(searchKey.begin(), searchKey.end(), ::isdigit)) {
                    int rollNo = stoi(searchKey);
                    if (StudentDatabase::isStudentExistByRollNo(rollNo))
                        StudentDatabase::getStudentByRollNo(rollNo)
                            .printDetails();
                    else
                        cout << "No student exist with given roll no." << endl;
                } else {
                    if (StudentDatabase::isStudentExistByName(searchKey))
                        StudentDatabase::getStudentByName(searchKey)
                            .printDetails();
                    else
                        cout << "No student exist with given name" << endl;
                }
                break;
            }
            case 'e':
                StudentDatabase::printAllStudents();
                break;
            case 'f':
                cout << "Exiting program..." << endl;
                exit(0);

            default:
                cout << "Incorrect option. Try again..." << endl;
                break;
        }
    }
}