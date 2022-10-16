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

public class Account extends Customer {
    private final Scanner sc = new Scanner(System.in);
    private int accountNo;
    private int password;
    private double balance;
    private String forgotPasswordIDs;
    private String forgotPasswordAns;

    private String openingDateTime;

    public Account(String name, int age, String mobileNo, double balance) {
        super(name, age, mobileNo);
        this.balance = balance;
    }

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

        if (acc != null) acc.setData();
        acc = null;
        System.gc();
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
        AccountsDatabase.updateBalance(getAccountNo(), getBalance());
    }

    public void withdrawAmount(double amount) {
        balance -= amount;
        AccountsDatabase.updateBalance(getAccountNo(), getBalance());
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
        AccountsDatabase.updateAccount(getAccountNo(), getPassword(), getName(), getAge(), getMobileNo());
    }

    public void updateAccountBalance() {
        var account = AccountsDatabase.getAccount(getAccountNo());
        assert account != null;
        balance = account.getBalance();
    }

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

        System.out.println("Your bank statement : ");

        TableFormat.show(headersList, rowsList);
    }

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

    public String getOpeningDateTime() {
        return openingDateTime;
    }

    public void setOpeningDateTime(String openingDateTime) {
        this.openingDateTime = openingDateTime;
    }

    public int getWithdrawLimit() {
        return 0;
    }

    public String type() {
        return "Account";
    }

    @Override
    public String toString() {
        return getAccountNo() + " " + getName();
    }
}