#include <iostream>

#include "Student.h"
#include "StudentDatabase.h"

using namespace std;

int main() {
    Student student = Student();
    student.setData();
    StudentDatabase::addStudent(student);
}