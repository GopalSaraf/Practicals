import java.util.Objects;
import java.util.Scanner;

public class Employee {
    private static int empCount = 0;
    private final int empID;
    private final int empNo;
    private String mobileNo;
    private String name;
    private String address;
    private String mailID;
    private final boolean validation = true;
    private final Scanner sc = new Scanner(System.in);

    public Employee(String name, String mobileNo, String mailID, String address) {
        incrementEmployee();
        this.empNo = empCount;
        this.empID = this.hashCode();
        this.name = name;
        this.mobileNo = mobileNo;
        this.address = address;
        this.mailID = mailID;
    }

    public Employee() {
        this("", "", "", "");
    }

    public void getData() {
        setName();
        setMobileNo();
        setMailID();
        setAddress();
    }

    public void display() {
        System.out.println();
        System.out.println("-------- Employee Information --------");
        System.out.println();
        System.out.println("ID            :  " + getEmpID());
        System.out.println("Name          :  " + getName());
        System.out.println("Mobile Number :  " + getMobileNo());
        System.out.println("Mail ID       :  " + getMailID());
        System.out.println("Address       :  " + getAddress());
    }

    public String getName() {
        return name;
    }

    private int getEmpID() {
        return empID;
    }

    private String getMobileNo() {
        return mobileNo;
    }

    private String getAddress() {
        return address;
    }

    private String getMailID() {
        return mailID;
    }

    private void setName() {
        System.out.print("Enter name of employee (" + empNo + ") > ");
        if (!validation) {
            this.name = sc.nextLine();
            return;
        }
        while (true) {
            this.name = sc.nextLine();
            if (!isValidName(this.name)) {
                System.out.print("Enter valid name of employee (" + empNo + ") > ");
            } else break;
        }
    }

    private void setMobileNo() {
        System.out.print("Enter mobile number of " + getName() + " > ");
        if (!validation) {
            this.mobileNo = sc.next();
            return;
        }
        while (true) {
            this.mobileNo = sc.next();
            if (!isValidMobile(this.mobileNo)) {
                System.out.print("Enter valid mobile number of " + getName() + " > ");
            } else break;
        }
    }

    private void setAddress() {
        System.out.print("Enter address of " + getName() + " > ");
        sc.nextLine();
        this.address = sc.nextLine();
    }

    private void setMailID() {
        System.out.print("Enter Email ID of " + getName() + " > ");
        if (!validation) {
            this.mailID = sc.next();
            return;
        }
        while (true) {
            this.mailID = sc.next();
            if (!isValidMail(this.mailID)) {
                System.out.print("Enter valid Email ID of " + getName() + " > ");
            } else break;
        }
    }

    private boolean isValidName(String name) {
        return name.matches("^[\\p{L} .'-]+$");
    }

    private boolean isValidMobile(String mobileNo) {
        return mobileNo.matches("[0-9]{10}");
    }

    private boolean isValidMail(String mailID) {
        return mailID.matches("^[a-zA-Z0-9_+&*-]+(?:\\.[a-zA-Z0-9_+&*-]+)"+
                "*@(?:[a-zA-Z0-9-]+\\.)+[a-zA-Z]{2,7}$");
    }

    @Override
    public int hashCode() {
        return Objects.hash(empNo * empNo);
    }

    private static void incrementEmployee() {
        empCount++;
    }

}
