package Accounts;

import Helper.BankHelper.TableFormat;
import Helper.CustomerHelper.ForgetPasswordHandler;
import Helper.BankHelper.Transactions;
import Helper.CustomerHelper.Valid;
import Database.AccountsDatabase;
import Database.TransactionsDatabase;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import static Helper.Messages.*;

/**
 * A {@code Account Class} which will hold all basic and common properties of an
 * account.
 * It will contain account number, password, balance for an account.
 * It will also contain questions and answers which is used when customer will
 * forget password.
 */
public class Account extends Customer {

    /**
     * {@code String} value to be returned by method {@link Account#type()} of
     * {@link Account} Class.
     */
    public static final String ACCOUNT = "Account";
    /**
     * {@code String} value to be returned by method {@link SavingAccount#type()} of
     * {@link SavingAccount} Class.
     */
    public static final String SAVING = "Saving";
    /**
     * {@code String} value to be returned by method {@link CurrentAccount#type()}
     * of {@link CurrentAccount} Class.
     */
    public static final String CURRENT = "Current";
    /**
     * {@code int} Account number.
     */
    private int accountNo;

    private String username;
    /**
     * {@code int} Password of account.
     */
    private String password;
    /**
     * {@code double} Balance of account.
     */
    private double balance;
    /**
     * {@code String} forget password question IDs.
     * IDs are separated by
     * {@value Helper.CustomerHelper.ForgetPasswordHandler#separator}.
     * What are IDs and questions? - .
     */
    private String forgotPasswordIDs;
    /**
     * {@code String} forget password answers.
     * Answers are separated by
     * {@value Helper.CustomerHelper.ForgetPasswordHandler#separator}.
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
    public Account(String name, String dateOfBirth, String mobileNo, String emailID, double balance) {
        super(name, dateOfBirth, mobileNo, emailID);
        this.balance = balance;
    }

    /**
     * This is helper function for {@link Account#deposit()} which will just add
     * amount in current balance.
     *
     * @param amount {@code double} amount to add in current balance.
     */
    public void depositAmount(double amount) {
        balance += amount;
        AccountsDatabase.updateBalance(getAccountNo(), getBalance());
    }

    /**
     * This is helper function for {@link Account#withdraw()} which will just
     * withdraw amount from current balance.
     *
     * @param amount {@code double} amount to withdraw from current balance.
     */
    public void withdrawAmount(double amount) {
        balance -= amount;
        AccountsDatabase.updateBalance(getAccountNo(), getBalance());
    }

    /**
     * Method to generate {@link #accountNo} for each account.
     * It will create random number between 1000 and 9999 which is not used
     * previously.
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
     * Method to update info (password, name, age, mobile number) in database.
     * When user will do transactions, it will only change the account object.
     * But by calling this method, data of database is also updated at same time.
     * This is done by
     * {@link AccountsDatabase#updateAccount(int, int, String, int, String)}.
     */
    public void updateInfoInDatabase() {
        AccountsDatabase.updateAccount(getAccountNo(), getUsername(), getPassword(),
                getName(), getDateOfBirth(), getMobileNo(), getEmailID());
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
     * Method to deposit money in account.
     * Here, it is just declared. Different account type will have different deposit
     * criteria.
     */
    public void deposit() {
    }

    /**
     * Method to withdraw money from account.
     * Here, it is just declared. Different account type will have different
     * withdraw criteria.
     */
    public void withdraw() {
    }

    /**
     * Method to transfer money within two accounts.
     * Here, it is just declared. Different account type will have different
     * transfer criteria.
     */
    public void transfer() {
    }

    public int getAccountNo() {
        return accountNo;
    }

    public void setAccountNo(int accountNo) {
        this.accountNo = accountNo;
    }

    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public String getForgotPasswordIDs() {
        return forgotPasswordIDs;
    }

    public void setForgotPasswordIDs(String forgotPasswordIDs) {
        this.forgotPasswordIDs = forgotPasswordIDs;
    }

    public String getForgotPasswordAns() {
        return forgotPasswordAns;
    }

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