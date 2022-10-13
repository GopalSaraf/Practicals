package Accounts;

import Database.Database;
import Helper.ForgetPasswordHandler;
import Helper.Valid;

import java.util.Scanner;

public class Account extends Customer {
    private final Scanner sc = new Scanner(System.in);
    private int accountNo;
    private int password;
    private double balance;
    private String forgotPasswordIDs;
    private String forgotPasswordAns;

    public Account(String name, int age, String mobileNo, double balance) {
        super(name, age, mobileNo);
        this.balance = balance;
    }

    @Override
    public void setData() {
        super.setData();
        generateAccNo();
        generatePassword();
        forgotPasswordHandler();
    }

    @Override
    public void getData() {
        super.getData();
    }

    public void depositAmount(double amount) {
        balance += amount;
        Database.updateBalance(getAccountNo(), getBalance());
    }

    public void withdrawAmount(double amount) {
        balance -= amount;
        Database.updateBalance(getAccountNo(), getBalance());
    }

    private void generateAccNo() {
        int min = 1000;
        int max = 9999;
        accountNo = (int) (Math.random() * (max - min + 1) + min);
        while (!Valid.isValidAccNo(accountNo)) {
            accountNo = (int) (Math.random() * (max - min + 1) + min);
        }
    }

    public void generatePassword() {
        String passwordStr;
        System.out.print("Enter a password you want to use (between 1000 to 9999) > ");
        passwordStr = sc.next();
        while (!Valid.isValidPassword(passwordStr)) {
            System.out.print("Enter valid password (between 1000 to 9999) > ");
            passwordStr = sc.next();
        }
        password = Integer.parseInt(passwordStr);
    }

    public void forgotPasswordHandler() {
        var qusAndAns = ForgetPasswordHandler.askQus();
        setForgotPasswordIDs(qusAndAns.qusIDs);
        setForgotPasswordAns(qusAndAns.answers);
    }

    public void updateInfoInDatabase() {
        Database.updateAccount(getAccountNo(), getPassword(), getName(), getAge(), getMobileNo());
    }

    public void updateAccountBalance() {
        var account = Database.getAccount(getAccountNo());
        assert account != null;
        balance = account.getBalance();
    }

    public void deposit() {
    }

    public void withdraw() {
    }

    public void transfer() {
    }

    public int getAccountNo() {
        return accountNo;
    }

    public void setAccountNo(int accountNo) {
        this.accountNo = accountNo;
    }

    public double getBalance() {
        return balance;
    }

    public int getPassword() {
        return password;
    }

    public void setPassword(int password) {
        this.password = password;
    }

    public int getMinBalance() {
        return 0;
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

    public int getWithdrawLimit() {
        return 0;
    }
}