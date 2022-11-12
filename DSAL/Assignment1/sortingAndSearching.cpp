// Title : Sorting and searching
// Problem Statement :
// Consider a student database of SEIT class. Database contains different fields
// of every student like Roll No, Name and SGPA.
// a) Design a roll call list, arrange list of students according to roll
// numbers in ascending order(Use Bubble Sort)
// b) Arrange list of students alphabetically. (Use Insertion sort)
// c) Arrange list of students to find out first ten toppers from a class.
// (Use Quick sort)
// d) Search students according to SGPA. If more than one student
// having same SGPA, then print list of all students having same SGPA.
// e) Search a particular student according to name using binary search without
// recursion. (All the student records having the presence of search key should
// be displayed)

// Program by : 23168 Gopal Saraf

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Students {  // Class to contain students data
   private:
    struct Student {  // Student struct
        string name;
        int rollNo;
        float sgpa;
    };

    vector<Student> classStudents;  // Class students array

   public:
    void takeStudentsInput() {  // To take students data inputs
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
                if (isValidRollNo(rollNo)) {  // Validating roll number
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

            float sgpa;
            cout << "Enter SGPA of student " << i << " > ";
            cin >> sgpa;

            while (true) {
                if (isValidSGPA(sgpa)) {  // Validating sgpa
                    students[i - 1].sgpa = sgpa;
                    break;
                } else {
                    cout << sgpa
                         << " is invalid. SGPA should be between 0 to 10."
                         << endl;
                    cout << "Enter valid SGPA for student " << i << " > ";
                    cin >> sgpa;
                }
            }
        }
        cout << endl;

        classStudents = students;
    }

    void sortStudents() {  // Function to handle bubble sort
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

    void searchStudentBySGPA() {  // Funtion to handle linear search of SGPA
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

    void searchStudentsByName() {  // Function to handle binary search of name
        string reqName;
        cout << endl << "Enter name you want to search for > ";
        cin >> reqName;
        cout << endl;

        int searchedStudent =
            searchNameBinarySearch(reqName, 0, classStudents.size() - 1);

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
        // Bubble Sort of students based on SGPA or roll number
        for (int i = 0; i < students.size() - 1; i++) {
            for (int j = 0; j < students.size() - i - 1; j++) {
                if ((bySGPA && students[j].sgpa > students[j + 1].sgpa) ||
                    (!bySGPA && students[j].rollNo > students[j + 1].rollNo))
                    swapStudents(students[j], students[j + 1]);
            }
        }
    }

    vector<Student> searchSGPA(float sgpa) {  // Linear search of SGPA
        vector<Student> searchedStudents;
        for (Student student : classStudents) {
            if (student.sgpa == sgpa) searchedStudents.push_back(student);
        }
        return searchedStudents;
    }

    int searchNameBinarySearch(string name, int low, int high) {
        // Binary search of name
        sortStudentsByName(classStudents);

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (classStudents[mid].name == name) return mid;

            if (classStudents[mid].name < name)
                low = mid + 1;

            else
                high = mid - 1;
        }
        return -1;
    }

    void sortStudentsByName(vector<Student> &students) {
        sort(students.begin(), students.end(),
             [](Student student1, Student student2) -> bool {
                 return student1.name < student2.name;
             });
    }

    void printStudent(Student student) {  // To print student data
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
        // To swap two students (For bubble sort)
        Student temp = student1;
        student1 = student2;
        student2 = temp;
    }

    vector<int> rollNos;

    bool isValidRollNo(int rollNo) {  // Roll number validation
        if (rollNo <= 0) return false;
        for (int rollN : rollNos)
            if (rollN == rollNo) return false;
        rollNos.push_back(rollNo);
        return true;
    }

    bool isValidSGPA(float sgpa) {  // SGPA validation
        return (sgpa >= 0 && sgpa <= 10);
    }

    vector<Student> getClassStudents() { return classStudents; }  // Getter
};

int main() {
    Students students;             // Class students object
    students.takeStudentsInput();  // Taking input

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
