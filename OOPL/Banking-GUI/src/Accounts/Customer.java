package Accounts;

/**
 * A {@code Customer Class} which will hold all basic and common properties of a
 * customer.
 * It will contain name, age, mobile number of a customer.
 * As well as it will contain the opening date and time of an account.
 */
public class Customer {

    /**
     * {@code String} name of customer.
     */
    private String name;

    /**
     * {@code String} date of birth (in format '{@code dd MMM, yyyy}') of customer.
     */
    private String dateOfBirth;

    /**
     * {@code String} mobile number of customer.
     */
    private String mobileNo;

    /**
     * {@code String} email ID of customer.
     */
    private String emailID;

    /**
     * {@code String} opening date and time of format {@code dd MMM, yyyy HH:mm}.
     */
    private String openingDateTime;

    Customer(String name, String dateOfBirth, String mobileNo, String emailID) {
        this.name = name;
        this.dateOfBirth = dateOfBirth;
        this.mobileNo = mobileNo;
        this.emailID = emailID;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getDateOfBirth() {
        return dateOfBirth;
    }

    public void setDateOfBirth(String dateOfBirth) {
        this.dateOfBirth = dateOfBirth;
    }

    public String getMobileNo() {
        return mobileNo;
    }

    public void setMobileNo(String mobileNo) {
        this.mobileNo = mobileNo;
    }

    public String getEmailID() {
        return emailID;
    }

    public void setEmailID(String emailID) {
        this.emailID = emailID;
    }

    public String getOpeningDateTime() {
        return openingDateTime;
    }

    public void setOpeningDateTime(String openingDateTime) {
        this.openingDateTime = openingDateTime;
    }
}