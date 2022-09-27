import java.util.Scanner;

public class Customer {
    private String name;
    private int age;
    private String mobileNo;
    private final boolean validation = true;
    private final Scanner sc = new Scanner(System.in);

    Customer(String name, int age, String mobileNo) {
        this.name = name;
        this.age = age;
        this.mobileNo = mobileNo;
    }

    Customer() {
        this("", 18, "0000000000");
    }

    public void setData() {
        setName();
        setAge();
        setMobileNo();
    }

    public void getData() {
        System.out.println();
        System.out.println("-------- Customer Information --------");
        System.out.println();
        System.out.println("Name           :  " + getName());
        System.out.println("Age            :  " + getAge());
        System.out.println("Mobile Number  :  " + getMobileNo());
        System.out.println();
    }

    private void setName() {
        System.out.print("Enter your name > ");
        while (true) {
            this.name = sc.nextLine();
            if (!isValidName(this.name)) {
                System.out.print("Enter valid name > ");
            } else
                break;
        }
    }

    private void setAge() {
        System.out.print("Enter age of " + getName() + " > ");
        while (true) {
            this.age = sc.nextInt();
            if (!isValidAge(this.age)) {
                System.out.print("Enter valid age of " + getName() + " > ");
            } else
                break;
        }
    }

    private void setMobileNo() {
        System.out.print("Enter mobile number of " + getName() + " > ");
        while (true) {
            this.mobileNo = sc.next();
            if (!isValidMobile(this.mobileNo)) {
                System.out.print("Enter valid mobile number of " + getName() + " > ");
            } else
                break;
        }
    }

    private boolean isValidName(String name) { // Name validation
        if (!validation)
            return true;
        return name.matches("^[\\p{L} .'-]+$");
    }

    private boolean isValidAge(int age) {
        if (!validation)
            return true;
        return age >= 18 && age < 120;
    }

    private boolean isValidMobile(String mobileNo) { // Mobile number validation
        if (!validation)
            return true;
        return mobileNo.matches("[0-9]{10}");
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getMobileNo() {
        return mobileNo;
    }

    public void setMobileNo(String mobileNo) {
        this.mobileNo = mobileNo;
    }
}
