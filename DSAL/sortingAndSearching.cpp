#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Students {
   private:
    struct Student {
        string name;
        int rollNo;
        float sgpa;
    };

    vector<Student> classStudents;

   public:
    void takeStudentsInput() {
        int noOfStudents;
        cout << "How many students are there in class > ";
        cin >> noOfStudents;

        vector<Student> students(noOfStudents);

        for (int i = 1; i <= noOfStudents; i++) {
            cout << endl;

            cout << "Enter name of student " << i << " > ";
            cin >> students[i - 1].name;

            int rollNo;
            cout << "Enter roll number of student " << i << " > ";
            cin >> rollNo;

            while (true) {
                if (isValidRollNo(rollNo)) {
                    students[i - 1].rollNo = rollNo;
                    break;
                } else {
                    cout << rollNo
                         << " is already used previously. Roll number can not "
                            "be repeated."
                         << endl;
                    cout << "Enter valid roll number for student " << i
                         << " > ";
                    cin >> rollNo;
                }
            }

            cout << "Enter SGPA of student " << i << " > ";
            cin >> students[i - 1].sgpa;
        }
        cout << endl;

        classStudents = students;
    }

    void sortStudents() {
        char option;
        cout << "On which basis you want to sort students ? " << endl;
        cout << "a - SGPA" << endl;
        cout << "b - Roll numbers" << endl;
        cout << "Option > ";
        cin >> option;

        bool wantContinue = true;
        while (wantContinue) {
            switch (option) {
                case 'a':
                    sortStudentsArray(classStudents, true);
                    wantContinue = false;
                    break;

                case 'b':
                    sortStudentsArray(classStudents, false);
                    wantContinue = false;
                    break;

                default:
                    cout << "Incorrect option... Try again." << endl;
                    cout << "Option > ";
                    cin >> option;
            }
        }
        printStudents(classStudents);
    }

    void searchStudentBySGPA() {
        float reqSGPA;
        cout << endl << "Enter SGPA you want to search for > ";
        cin >> reqSGPA;
        cout << endl;

        vector<Student> searchedStudents = searchSGPA(reqSGPA);
        int noOfStudents = searchedStudents.size();

        switch (noOfStudents) {
            case 0:
                cout << "No student got SGPA of " << reqSGPA << endl;
                break;
            case 1:
                cout << "Only 1 student got SGPA of " << reqSGPA << " : "
                     << endl;
                printStudents(searchedStudents);
                break;
            default:
                cout << noOfStudents << " got SGPA of " << reqSGPA << " : "
                     << endl;
                printStudents(searchedStudents);
                break;
        }
        cout << endl;
    }

    void searchStudentsByName() {
        string reqName;
        cout << endl << "Enter name you want to search for > ";
        cin >> reqName;
        cout << endl;

        int searchedStudent = searchNameBinarySearch(classStudents, reqName, 0,
                                                     classStudents.size() - 1);

        switch (searchedStudent) {
            case 1:
                cout << "Only 1 student is of name " << reqName << " : "
                     << endl;
                printStudent(classStudents[searchedStudent]);
                cout << endl;
                break;

            case -1:
                cout << "No student with name " << reqName << endl;
                break;

            default:
                cout << "Student details of name " << reqName << " : " << endl;
                printStudent(classStudents[searchedStudent]);
                break;
        }
        cout << endl;
    }

   private:
    void sortStudentsArray(vector<Student> &students, bool bySGPA) {
        for (int i = 0; i < students.size() - 1; i++) {
            for (int j = 0; j < students.size() - i - 1; j++) {
                if ((bySGPA && students[j].sgpa > students[j + 1].sgpa) ||
                    (!bySGPA && students[j].rollNo > students[j + 1].rollNo))
                    swapStudents(students[j], students[j + 1]);
            }
        }
    }

    int searchNameBinarySearch(vector<Student> students, string name, int low,
                               int high) {
        sortStudentsByName(classStudents);

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (students[mid].name == name) return mid;

            if (students[mid].name < name)
                low = mid + 1;

            else
                high = mid - 1;
        }
        return -1;
    }

    vector<Student> searchSGPA(float sgpa) {
        vector<Student> searchedStudents;
        for (Student student : classStudents) {
            if (student.sgpa == sgpa) searchedStudents.push_back(student);
        }
        return searchedStudents;
    }

    void sortStudentsByName(vector<Student> &students) {
        sort(students.begin(), students.end(),
             [](Student student1, Student student2) -> bool {
                 return student1.name < student2.name;
             });
    }

    void printStudent(Student student) {
        cout << endl;
        cout << "Student name            :   " << student.name << endl;
        cout << "Student roll number     :   " << student.rollNo << endl;
        cout << "Student SGPA            :   " << student.sgpa << endl;
    }

    void printStudents(vector<Student> students) {
        for (Student student : students) {
            printStudent(student);
        }
        cout << endl;
    }

    void swapStudents(Student &student1, Student &student2) {
        Student temp = student1;
        student1 = student2;
        student2 = temp;
    }

    vector<int> rollNos;

    bool isValidRollNo(int rollNoToCheck) {
        for (int rollNo : rollNos)
            if (rollNoToCheck == rollNo) return false;
        rollNos.push_back(rollNoToCheck);
        return true;
    }

    vector<Student> getClassStudents() { return classStudents; }
};

int main() {
    Students students;
    students.takeStudentsInput();

    while (true) {
        char option;
        cout << "Choose an option : " << endl;
        cout << "a - Sort students by SGPA or Roll numbers" << endl;
        cout << "b - Search students by SGPA" << endl;
        cout << "c - Search students by name" << endl;
        cout << "d - Exit program" << endl;
        cout << "Option > ";
        cin >> option;
        cout << endl;

        switch (option) {
            case 'a':
                students.sortStudents();
                break;

            case 'b':
                students.searchStudentBySGPA();
                break;

            case 'c':
                students.searchStudentsByName();
                break;

            case 'd':
                cout << "Exiting program..." << endl;
                exit(0);

            default:
                cout << "Incorrect option... Try again." << endl;
        }
    }
}
