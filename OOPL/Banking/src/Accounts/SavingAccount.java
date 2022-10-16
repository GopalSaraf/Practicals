package Accounts;

import CustomerHelper.Transactions;
import Database.AccountsDatabase;

public class SavingAccount extends Account {

    public SavingAccount(String name, int age, String mobileNo, double balance) {
        super(name, age, mobileNo, balance);
    }

    public SavingAccount() {
        this("", 18, "0000000000", 0);
    }

    @Override
    public void setData() {
        super.setData();
        while (getBalance() < getMinBalance()) {
            deposit();
        }
        System.out.print("Your saving account is created SUCCESSFULLY. ");
        System.out.println("Your account number is " + getAccountNo() + ".");
        System.out.println();
        AccountsDatabase.addAccount(this);
    }

    @Override
    public void getData() {
        super.getData();
        System.out.println("-------- Account Information --------");
        System.out.println();
        System.out.println("Account type   :  Saving Account");
        System.out.println("Account Number :  " + getAccountNo());
        System.out.println("Opened at      :  " + getOpeningDateTime());
        System.out.println("Balance        :  " + Transactions.currency(getBalance()));
        System.out.println();
        System.out.println("------------------**------------------");
    }

    @Override
    public void deposit() {
        Transactions.deposit(this);
    }

    @Override
    public void withdraw() {
        Transactions.withdraw(this);
    }

    @Override
    public void transfer() {
        Transactions.transfer(this);
    }

    @Override
    public int getMinBalance() {
        return 3_000;
    }

    @Override
    public int getWithdrawLimit() {
        return 20_000;
    }

    @Override
    public String type() {
        return "Saving";
    }
}