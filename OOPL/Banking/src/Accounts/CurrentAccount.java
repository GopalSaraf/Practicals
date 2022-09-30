package Accounts;

import Database.Database;
import Helper.Transaction;

public class CurrentAccount extends Account {

    public CurrentAccount(String name, int age, String mobileNo, double balance) {
        super(name, age, mobileNo, balance);
    }

    public CurrentAccount() {
        this("", 18, "0000000000", 0);
    }

    @Override
    public void setData() {
        super.setData();
        while (getBalance() < getMinBalance()) {
            deposit();
        }
        System.out.print("Your current account is created SUCCESSFULLY. ");
        System.out.println("Your account number is " + getAccountNo() + ".");
        System.out.println();
        Database.addAccount(this);
    }

    @Override
    public void getData() {
        super.getData();
        System.out.println("-------- Accounts.Account Information --------");
        System.out.println();
        System.out.println("Accounts.Account type   :  Current Accounts.Account");
        System.out.println("Accounts.Account Number :  " + getAccountNo());
        System.out.println("Balance        :  " + Transaction.currency(getBalance()));
        System.out.println();
        System.out.println("------------------**------------------");
    }

    @Override
    public void deposit() {
        Transaction.deposit(this);
    }

    @Override
    public void withdraw() {
        Transaction.withdraw(this);
    }

    @Override
    public void transfer() {
        Transaction.transfer(this);
    }

    public int getMinBalance() {
        return 5_000;
    }

    public int getWithdrawLimit() {
        return 1_00_000;
    }

}