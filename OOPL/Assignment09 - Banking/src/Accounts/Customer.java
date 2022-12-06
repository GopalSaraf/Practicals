package Accounts;

import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.Scanner;

import static Helper.CustomerHelper.Valid.*;
import static Helper.Messages.*;

/**
 * A {@code Customer Class} which will hold all basic and common properties of a
 * customer.
 * It will contain name, age, mobile number of a customer.
 * As well as it will contain the opening date and time of an account.
 */
public class Customer {

    /**
     * Scanner object for taking input from user.
     */
    private final Scanner sc = new Scanner(System.in);

    /**
     * {@code String} name of customer.
     */
    private String name;

    /**
     * {@code int} age of customer.
     */
    private int age;

    /**
     * {@code String} mobile number of customer.
     */
    private String mobileNo;

    /**
     * {@code String} opening date and time of format {@code dd-MM-yyyy HH:mm}.
     */
    private String openingDateTime;

    /**
     * Customer constructor
     *
     * @param name     A {@code String} name of customer
     * @param age      A {@code int} age of customer
     * @param mobileNo A {@code String} mobile number of customer
     */
    Customer(String name, int age, String mobileNo) {
        this.name = name;
        this.age = age;
        this.mobileNo = mobileNo;
    }

    /**
     * Method to get the data from user.
     * This method will set {@link #openingDateTime} of account.
     * And it will make call for methods to set {@link #name}, {@link #age} and
     * {@link #mobileNo}.
     */
    public void setData() {
        DateTimeFormatter DATE_TIME_FORMATTER = DateTimeFormatter.ofPattern("dd-MM-yyyy HH:mm");
        openingDateTime = LocalDateTime.now().format(DATE_TIME_FORMATTER);

        setName();
        setAge();
        setMobileNo();
    }

    /**
     * Method to print basic info of customer.
     * This will print name, age and mobile number.
     */
    public void getData() {
        System.out.println(PRINT_CUSTOMER_INFO);
        System.out.printf(PRINT_NAME, getName());
        System.out.printf(PRINT_AGE, getAge());
        System.out.printf(PRINT_MOBILE, getMobileNo());
    }

    /**
     * Method to set {@link #name} of customer.
     */
    public void setName() {
        System.out.print(ENTER_NAME_FOR_CUSTOMER);
        while (true) {
            this.name = sc.nextLine();
            if (!isValidName(this.name)) {
                // If name is not valid
                System.out.print(ENTER_VALID_NAME_FOR_CUSTOMER);
            } else
                break;
        }
    }

    /**
     * Method to set {@link #age} of customer.
     */
    public void setAge() {
        String ageStr;
        System.out.print(ENTER_AGE_FOR_CUSTOMER);
        while (true) {
            ageStr = sc.next();
            if (!isValidAge(ageStr)) {
                // If age is not valid
                System.out.print(ENTER_VALID_AGE_FOR_CUSTOMER);
            } else
                break;
        }
        age = Integer.parseInt(ageStr);
    }

    /**
     * Method to set {@link #mobileNo} of customer.
     */
    public void setMobileNo() {
        System.out.print(ENTER_MOBILE_FOR_CUSTOMER);
        while (true) {
            this.mobileNo = sc.next();
            if (!isValidMobile(this.mobileNo)) {
                // If mobile number is not valid
                System.out.print(ENTER_VALID_MOBILE_FOR_CUSTOMER);
            } else
                break;
        }
    }

    /**
     * Getter for name of customer.
     *
     * @return A {@code String} {@link #name} of customer.
     */
    public String getName() {
        return name;
    }

    /**
     * Getter for age of customer.
     *
     * @return A {@code int} {@link #age} of customer.
     */
    public int getAge() {
        return age;
    }

    /**
     * Getter for mobile number of customer.
     *
     * @return A {@code String} {@link #mobileNo} of customer.
     */
    public String getMobileNo() {
        return mobileNo;
    }

    /**
     * Getter for account opening date and time.
     *
     * @return A {@code String} {@link #openingDateTime} of account.
     */
    public String getOpeningDateTime() {
        return openingDateTime;
    }

    /**
     * Setter for account {@link #openingDateTime}.
     *
     * @param openingDateTime A {@code String} account opening date and time
     *                        of format {@code dd-MM-yyyy HH:mm}
     */
    public void setOpeningDateTime(String openingDateTime) {
        this.openingDateTime = openingDateTime;
    }
}