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
        String details = "Student Information";
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

    public void takeNameInput() {
        System.out.print("Enter name of student > ");
        setName(sc.nextLine());
    }

    public void takeRollNoInput() {
        System.out.print("Enter roll no of student > ");
        setRollNo(sc.nextInt());
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
