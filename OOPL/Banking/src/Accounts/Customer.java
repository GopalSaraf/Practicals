package Accounts;

import Helper.Valid;
import java.util.Scanner;

import static Helper.Valid.*;

public class Customer {
    private String name;
    private int age;
    private String mobileNo;
    private final Scanner sc = new Scanner(System.in);

    Customer(String name, int age, String mobileNo) {
        this.name = name;
        this.age = age;
        this.mobileNo = mobileNo;
    }

    public void setData() {
        setName();
        setAge();
        setMobileNo();
    }

    public void getData() {
        System.out.println();
        System.out.println("-------- Accounts.Customer Information --------");
        System.out.println();
        System.out.println("Name           :  " + getName());
        System.out.println("Age            :  " + getAge());
        System.out.println("Mobile Number  :  " + getMobileNo());
        System.out.println();
    }

    public void setName() {
        System.out.print("Enter your name > ");
        while (true) {
            this.name = sc.nextLine();
            if (!isValidName(this.name)) {
                System.out.print("Enter valid name > ");
            } else
                break;
        }
    }

    public void setAge() {
        System.out.print("Enter your age > ");
        while (true) {
            this.age = sc.nextInt();
            if (!isValidAge(this.age)) {
                System.out.print("Enter valid age > ");
            } else
                break;
        }
    }

    public void setMobileNo() {
        System.out.print("Enter your mobile number > ");
        while (true) {
            this.mobileNo = sc.next();
            if (!isValidMobile(this.mobileNo)) {
                System.out.print("Enter valid mobile number > ");
            } else
                break;
        }
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public String getMobileNo() {
        return mobileNo;
    }
}