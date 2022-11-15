// Title : File Handling
// Problem Statement :
// Implement a program for maintaining a database of student records using
// Files. Student has Student_id,name,Roll_no, Class, marks and address. Display
// the data for few students. 
// 1. Create Database
// 2. Display Database
// 3. Delete Records
// 4. Update Record
// 5. Search Record

// Program by : 23168 Gopal Saraf

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char option;

        while (true) {
            System.out.println();
            System.out.println("Choose an option"); // Menu
            System.out.println("a - Add student in database");
            System.out.println("b - Update student from database");
            System.out.println("c - Delete student from database");
            System.out.println("d - Search student in database");
            System.out.println("e - Display all students in database");
            System.out.println("f - Quit program");
            System.out.println();
            System.out.print("Your Option > ");
            option = sc.next().charAt(0);
            System.out.println();

            switch (option) {
                case 'a' -> {
                    new Student().takeInputFromUser();
                    System.out.println();
                    System.out.println("Student data saved in database.");
                }
                case 'b' -> {
                    String updateKey;
                    Student student = null;
                    System.out.print("Enter Name OR Roll No of student you want to search > ");
                    sc.nextLine();
                    updateKey = sc.nextLine();
                    if (updateKey.matches("[0-9]+")) {
                        int rollNo = Integer.parseInt(updateKey);
                        if (StudentDatabase.isStudentExist(StudentDatabase.getStudentIDByRollNo(rollNo)))
                            student = StudentDatabase.getStudent(StudentDatabase.getStudentIDByRollNo(rollNo));
                        else
                            System.out.println("\nNo student exist with given roll no.");
                    } else {
                        if (StudentDatabase.isStudentExist(StudentDatabase.getStudentIDByName(updateKey)))
                            student = StudentDatabase.getStudent(StudentDatabase.getStudentIDByName(updateKey));
                        else
                            System.out.println("\nNo student exist with given name.");
                    }
                    if (student != null) {
                        student.updateData();
                        System.out.println("\nStudent data updated in database");
                    }
                }
                case 'c' -> {
                    String delKey;
                    System.out.print("Enter Name OR Roll No of student you want to delete > ");
                    sc.nextLine();
                    delKey = sc.nextLine();
                    if (delKey.matches("[0-9]+")) {
                        int rollNo = Integer.parseInt(delKey);
                        if (StudentDatabase.isStudentExist(StudentDatabase.getStudentIDByRollNo(rollNo))) {
                            StudentDatabase.deleteStudent(StudentDatabase.getStudentIDByRollNo(rollNo));
                            System.out.println("\nDeleted student with roll no " + rollNo);
                        } else
                            System.out.println("\nNo student exist with given roll no.");
                    } else {
                        if (StudentDatabase.isStudentExist(StudentDatabase.getStudentIDByName(delKey))) {
                            StudentDatabase.deleteStudent(StudentDatabase.getStudentIDByName(delKey));
                            System.out.println("\nDeleted student with name " + delKey);
                        } else
                            System.out.println("\nNo student exist with given name.");
                    }
                }
                case 'd' -> {
                    String searchKey;
                    System.out.print("Enter Name OR Roll No of student you want to search > ");
                    sc.nextLine();
                    searchKey = sc.nextLine();

                    if (searchKey.matches("[0-9]+")) {
                        int rollNo = Integer.parseInt(searchKey);
                        if (StudentDatabase.isStudentExist(StudentDatabase.getStudentIDByRollNo(rollNo)))
                            System.out.println(
                                    StudentDatabase.getStudent(StudentDatabase.getStudentIDByRollNo(rollNo)));
                        else
                            System.out.println("No student exist with given roll no.");
                    } else {
                        if (StudentDatabase.isStudentExist(StudentDatabase.getStudentIDByName(searchKey)))
                            System.out.println(
                                    StudentDatabase.getStudent(StudentDatabase.getStudentIDByName(searchKey)));
                        else
                            System.out.println("No student exist with given name.");
                    }
                }
                case 'e' -> StudentDatabase.printAllStudents();
                case 'f' -> {
                    System.out.println("Exiting...");
                    System.exit(0);
                }
                default -> System.out.println("Incorrect Option. Try again...");
            }
        }
    }
}