import java.util.Scanner;

public class Student {
    private int studentID;
    private String name;
    private int rollNo;
    private String division;
    private float marks;
    private String address;
    private final Scanner sc = new Scanner(System.in);

    public Student(int studentID, String name, int rollNo, String division, float marks, String address) {
        this.studentID = studentID;
        this.name = name;
        this.rollNo = rollNo;
        this.division = division;
        this.marks = marks;
        this.address = address;
    }

    public Student() {
        this(0, "", 0, "", 0f, "");
    }

    @Override
    public String toString() {
        String details = "\nStudent Information";
        details += "\nName      :  ";
        details += getName();
        details += "\nRoll No   :  ";
        details += getRollNo();
        details += "\nDivision  :  ";
        details += getDivision();
        details += "\nMarks     :  ";
        details += getMarks();
        details += "\nAddress   :  ";
        details += getAddress();
        return details;
    }

    public void takeInputFromUser() {
        setStudentID(StudentDatabase.getNewStudentID());
        takeNameInput();
        takeRollNoInput();
        takeDivisionInput();
        takeMarksInput();
        takeAddressInput();
        StudentDatabase.addStudent(this);
    }

    public void updateData() {
        System.out.println();
        System.out.println("What do you want to update ?");
        System.out.println("a - Name (" + getName() + ")");
        System.out.println("b - Roll No (" + getRollNo() + ")");
        System.out.println("c - Division (" + getDivision() + ")");
        System.out.println("d - Marks (" + getMarks() + ")");
        System.out.println("e - Address (" + getAddress() + ")");
        System.out.println("f - None");
        System.out.println();
        System.out.print("Your Option > ");
        char option = sc.next().charAt(0);
        System.out.println();

        switch (option) {
            case 'a' -> {
                sc.nextLine();
                takeNameInput();
            }
            case 'b' -> takeRollNoInput();
            case 'c' -> takeDivisionInput();
            case 'e' -> takeAddressInput();
        }
        StudentDatabase.updateStudent(this);
    }

    public void takeNameInput() {
        System.out.print("Enter name of student > ");
        setName(sc.nextLine());
    }

    public void takeRollNoInput() {
        System.out.print("Enter roll no of student > ");
        while (true) {
            int roll = sc.nextInt();
            if (!StudentDatabase.isStudentExist(StudentDatabase.getStudentIDByRollNo(roll))) {
                setRollNo(roll);
                break;
            } else {
                System.out.println(roll + " is used previously. Roll no should be unique.");
                System.out.print("Enter valid roll no > ");
            }
        }
    }

    public void takeDivisionInput() {
        System.out.print("Enter division of student > ");
        setDivision(sc.next());
    }

    public void takeMarksInput() {
        System.out.print("Enter marks of student > ");
        setMarks(sc.nextFloat());
    }

    public void takeAddressInput() {
        System.out.print("Enter address of student > ");
        sc.nextLine();
        setAddress(sc.nextLine());
    }

    public int getStudentID() {
        return studentID;
    }

    public void setStudentID(int studentID) {
        this.studentID = studentID;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getRollNo() {
        return rollNo;
    }

    public void setRollNo(int rollNo) {
        this.rollNo = rollNo;
    }

    public String getDivision() {
        return division;
    }

    public void setDivision(String division) {
        this.division = division;
    }

    public float getMarks() {
        return marks;
    }

    public void setMarks(float marks) {
        this.marks = marks;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }
}
