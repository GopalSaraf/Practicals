package Accounts;

import BankHelper.TableFormat;
import CustomerHelper.ForgetPasswordHandler;
import CustomerHelper.Transactions;
import CustomerHelper.Valid;
import Database.AccountsDatabase;
import Database.TransactionsDatabase;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 * A {@code Account Class} which will hold all basic and common properties of an account.
 * It will contain account number, password, balance for an account.
 * It will also contain questions and answers which is used when customer will forget password.
 */
public class Account extends Customer {

    /**
     * {@code String} value to be returned by method {@link Account#type()} of {@link Account} Class.
     */
    public static final String ACCOUNT = "Account";
    /**
     * {@code String} value to be returned by method {@link SavingAccount#type()} of {@link SavingAccount} Class.
     */
    public static final String SAVING = "Saving";
    /**
     * {@code String} value to be returned by method {@link CurrentAccount#type()} of {@link CurrentAccount} Class.
     */
    public static final String CURRENT = "Current";
    /**
     * Scanner object for taking input from user.
     */
    private final Scanner sc = new Scanner(System.in);
    /**
     * {@code int} Account number.
     */
    private int accountNo;
    /**
     * {@code int} Password of account.
     */
    private int password;
    /**
     * {@code double} Balance of account.
     */
    private double balance;
    /**
     * {@code String} forget password question IDs.
     * IDs are separated by {@value CustomerHelper.ForgetPasswordHandler.QusAnsPair#separator}.
     * What are IDs and questions? - {@link ForgetPasswordHandler#questions}.
     */
    private String forgotPasswordIDs;
    /**
     * {@code String} forget password answers.
     * Answers are separated by {@value CustomerHelper.ForgetPasswordHandler.QusAnsPair#separator}.
     */
    private String forgotPasswordAns;

    /**
     * Account class constructor.
     *
     * @param name     A {@code String} name of customer
     * @param age      A {@code int} age of customer
     * @param mobileNo A {@code String} mobile number of customer
     * @param balance  A {@code double} balance of account.
     */
    public Account(String name, int age, String mobileNo, double balance) {
        super(name, age, mobileNo);
        this.balance = balance;
    }

    /**
     * A static method which will create account according to user's need.
     * This will print menu and according to user's option, it will create that account in bank.
     */
    public static void createAccount() {
        Scanner sc = new Scanner(System.in);
        char accountType;
        Account acc = null;
        System.out.println("Choose which account type you want to create : ");
        System.out.println("a - Saving Account");
        System.out.println("b - Current Account");
        System.out.println();
        System.out.print("Your option [a/b] > ");
        accountType = sc.next().charAt(0);
        System.out.println();

        switch (accountType) {
            case 'a' -> acc = new SavingAccount();
            case 'b' -> acc = new CurrentAccount();
            default -> System.out.println("Incorrect option.\n");
        }

        if (acc != null) acc.setData(); // Taking input from user

        // As the account is created and is added in database by setData() method,
        // We will not need account object anymore.
        // So deleting account object and calling garbage collector.
        acc = null;
        System.gc();
    }

    /**
     * Method to get the data from user.
     * This method will first call {@link Customer#setData()}.
     * Then it will call for methods to set {@link #accountNo}, {@link #password},
     * {@link #forgotPasswordIDs} and {@link #forgotPasswordAns}
     */
    @Override
    public void setData() {
        super.setData();
        generateAccNo();
        generatePassword();
        forgotPasswordHandler();

    }

    /**
     * Method to print user data.
     * There is nothing in {@link Account} Class to print,
     * but it will call {@link Customer#getData()}.
     */
    @Override
    public void getData() {
        super.getData();
    }

    /**
     * This is helper function for {@link Account#deposit()} which will just add amount in current balance.
     *
     * @param amount {@code double} amount to add in current balance.
     */
    public void depositAmount(double amount) {
        balance += amount;
        AccountsDatabase.updateBalance(getAccountNo(), getBalance());
    }

    /**
     * This is helper function for {@link Account#withdraw()} which will just withdraw amount from current balance.
     *
     * @param amount {@code double} amount to withdraw from current balance.
     */
    public void withdrawAmount(double amount) {
        balance -= amount;
        AccountsDatabase.updateBalance(getAccountNo(), getBalance());
    }

    /**
     * Method to generate {@link #accountNo} for each account.
     * It will create random number between 1000 and 9999 which is not used previously.
     */
    private void generateAccNo() {
        int min = 1000; // Lower limit for account number
        int max = 9999; // Upper limit for account number
        accountNo = (int) (Math.random() * (max - min + 1) + min);
        // This account number should be unique. So validating it.
        while (!Valid.isValidAccNo(accountNo)) {
            accountNo = (int) (Math.random() * (max - min + 1) + min);
        }
    }

    /**
     * Method to set {@link #password} for an account.
     * This will only allow integer password between 1000 and 9999.
     */
    public void generatePassword() {
        String passwordStr;
        System.out.print("Enter a password you want to use (between 1000 to 9999) > ");
        // As user may enter anything in password field,
        // So taking input in string and validating it.
        passwordStr = sc.next();
        while (!Valid.isValidPassword(passwordStr)) {
            System.out.print("Enter valid password (between 1000 to 9999) > ");
            passwordStr = sc.next();
        }
        password = Integer.parseInt(passwordStr);
    }

    /**
     * Method to handle forget password case.
     * This will take input and set {@link #forgotPasswordIDs} and {@link #forgotPasswordAns}.
     * This is done with help of {@link ForgetPasswordHandler} Class.
     */
    public void forgotPasswordHandler() {
        var qusAndAns = ForgetPasswordHandler.askQus();
        setForgotPasswordIDs(qusAndAns.qusIDs);
        setForgotPasswordAns(qusAndAns.answers);
    }

    /**
     * Method to update info (password, name, age, mobile number) in database.
     * When user will do transactions, it will only change the account object.
     * But by calling this method, data of database is also updated at same time.
     * This is done by {@link AccountsDatabase#updateAccount(int, int, String, int, String)}.
     */
    public void updateInfoInDatabase() {
        AccountsDatabase.updateAccount(getAccountNo(), getPassword(), getName(), getAge(), getMobileNo());
    }

    /**
     * Method to update balance of account object.
     * When any other account will transfer money to this account,
     * It will update in database but not object.
     * By calling this method, balance of account object is updated.
     */
    public void updateAccountBalance() {
        var accountData = AccountsDatabase.getAccountInfo(getAccountNo());
        assert accountData != null;
        balance = Double.parseDouble(accountData.get("balance"));
    }

    /**
     * Method to print statement of this account.
     * It will show transaction date and time, details and money transfer.
     * Table formatted statement is printed using {@link TableFormat} Class.
     */
    public void getStatement() {
        var transactions = TransactionsDatabase.getTransactions(getAccountNo(), true);

        List<String> headersList = new ArrayList<>();
        headersList.add("Date & Time");
        headersList.add("Details");
        headersList.add("Deposits");
        headersList.add("Withdrawals");
        headersList.add("Balance");

        List<List<String>> rowsList = new ArrayList<>();

        for (Transactions.Transaction transaction : transactions) {
            rowsList.add(transaction.getTransactionList());
        }

        System.out.println();
        System.out.println("Your bank statement : ");

        TableFormat.show(headersList, rowsList);
    }

    /**
     * Method to update the current name, age and mobile number of customer.
     * This will print the menu and update whatever user want to update.
     */
    public void updateAccount() {
        char option;
        System.out.println();
        System.out.println("Please choose what do you want to update :");
        System.out.println("a - Name");
        System.out.println("b - Age");
        System.out.println("c - Mobile number");
        System.out.println("d - None of these");
        System.out.println();
        System.out.print("Your Choice [a/b/c] > ");
        option = sc.next().charAt(0);
        System.out.println();

        switch (option) {
            case 'a' -> {
                setName();
                System.out.println();
                System.out.println("Name updated SUCCESSFULLY.");
            }
            case 'b' -> {
                setAge();
                System.out.println();
                System.out.println("Age updated SUCCESSFULLY.");
            }
            case 'c' -> {
                setMobileNo();
                System.out.println();
                System.out.println("Mobile number updated SUCCESSFULLY.");
            }
            case 'd' -> System.out.println("Updating skipped.");
            default -> System.out.println("Incorrect Option. Try again...");

        }
        updateInfoInDatabase();
    }

    /**
     * Method to deposit money in account.
     * Here, it is just declared. Different account type will have different deposit criteria.
     */
    public void deposit() {
    }

    /**
     * Method to withdraw money from account.
     * Here, it is just declared. Different account type will have different withdraw criteria.
     */
    public void withdraw() {
    }

    /**
     * Method to transfer money within two accounts.
     * Here, it is just declared. Different account type will have different transfer criteria.
     */
    public void transfer() {
    }

    /**
     * Getter for account number of account.
     *
     * @return {@code int} {@link #accountNo} of account.
     */
    public int getAccountNo() {
        return accountNo;
    }

    /**
     * Setter for {@link #accountNo} of account.
     *
     * @param accountNo {@code int} account number to set
     */
    public void setAccountNo(int accountNo) {
        this.accountNo = accountNo;
    }

    /**
     * Getter for balance of account.
     *
     * @return {@code double} {@link #balance} of account.
     */
    public double getBalance() {
        return balance;
    }

    /**
     * Getter for password of account.
     *
     * @return {@code int} {@link #password} of account.
     */
    public int getPassword() {
        return password;
    }

    /**
     * Setter for {@link  #password} of account.
     *
     * @param password {@code int} password to set
     */
    public void setPassword(int password) {
        this.password = password;
    }

    /**
     * Getter for forget password IDs of account.
     *
     * @return {@code String} {@link #forgotPasswordIDs} of account.
     */
    public String getForgotPasswordIDs() {
        return forgotPasswordIDs;
    }

    /**
     * Setter for {@link #forgotPasswordIDs} of account.
     *
     * @param forgotPasswordIDs {@code String} forget password IDs to set
     *                          (Separated by {@value  ForgetPasswordHandler.QusAnsPair#separator})
     */
    public void setForgotPasswordIDs(String forgotPasswordIDs) {
        this.forgotPasswordIDs = forgotPasswordIDs;
    }

    /**
     * Getter for forget password answers of account.
     *
     * @return {@code String} {@link #forgotPasswordAns} of account.
     */
    public String getForgotPasswordAns() {
        return forgotPasswordAns;
    }

    /**
     * Setter for {@link #forgotPasswordAns} of account.
     *
     * @param forgotPasswordAns {@code String} forget password answers to set
     *                          (Separated by {@value  ForgetPasswordHandler.QusAnsPair#separator})
     */
    public void setForgotPasswordAns(String forgotPasswordAns) {
        this.forgotPasswordAns = forgotPasswordAns;
    }

    /**
     * Getter for minimum balance that should be present in account.
     * Here as it is general account, it should be 0.
     *
     * @return {@code 0}
     */
    public int getMinBalance() {
        return 0;
    }

    /**
     * Getter for maximum balance that user can withdraw at a time.
     * Here as it is general account, it should be 0.
     *
     * @return {@code 0}
     */
    public int getWithdrawLimit() {
        return 0;
    }

    /**
     * A method which will return type of account.
     *
     * @return {@value Account#ACCOUNT}
     */
    public String type() {
        return Account.ACCOUNT;
    }

    /**
     * Method to print account object.
     *
     * @return {@code (account number) (name of customer)}
     */
    @Override
    public String toString() {
        return getAccountNo() + " " + getName();
    }
}