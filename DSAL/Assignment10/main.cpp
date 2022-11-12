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
                break;
            }
            case 'b':
                break;
            case 'c':
                break;
            case 'd': {
                string searchKey;
                cout
                    << "Enter Name OR Roll No of student you want to search > ";
                cin >> searchKey;
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