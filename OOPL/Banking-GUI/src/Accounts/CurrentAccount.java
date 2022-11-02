package Accounts;

import Helper.BankHelper.Transactions;
import Database.AccountsDatabase;

import static Helper.Messages.*;
import static Helper.Messages.PRINT_ENDING;

/**
 * A {@code CurrentAccount Class} which will hold all the data regarding a
 * current account.
 * Whenever the current account of the user is needed, the object of this class
 * is created.
 */
public class CurrentAccount extends Account {

    /**
     * Parameterized constructor for current account.
     *
     * @param name     A {@code String} holding name of the customer.
     * @param age      An {@code int} holding age of customer.
     * @param mobileNo A {@code String} holding mobile number of the customer.
     * @param balance  A {@code double} holding the account balance.
     */
    public CurrentAccount(String name, String dateOfBirth, String mobileNo, String emailID, double balance) {
        super(name, dateOfBirth, mobileNo, emailID, balance);
    }

    /**
     * parameterize constructor to initialise name, age, mobile number and balance
     * to default values.
     */
    public CurrentAccount() {
        this("", "", "", "", 0);
    }

    /**
     * This method will deposit the money in current account.
     * It will call {@link Transactions#deposit(Account)} and pass this account as a
     * parameter.
     */
    @Override
    public void deposit() {
        Transactions.deposit(this);
    }

    /**
     * This method will withdraw the money from current account.
     * It will call {@link Transactions#withdraw(Account)} and pass this account as
     * a parameter.
     */
    @Override
    public void withdraw() {
        Transactions.withdraw(this);
    }

    /**
     * This method will transfer the money from current account to other account.
     * It will call {@link Transactions#transfer(Account)} and pass this account as
     * a parameter.
     */
    @Override
    public void transfer() {
        Transactions.transfer(this);
    }

    /**
     * Getter for minimum balance that should be present in current account.
     * In this bank, current account should hold minimum 5,000 balance.
     *
     * @return {@code 5000}
     */
    @Override
    public int getMinBalance() {
        return 5_000;
    }

    /**
     * Getter for maximum balance that user can withdraw at a time.
     * In this bank, current account holders can withdraw at max 1,00,000 balance.
     *
     * @return {@code 100000}
     */
    @Override
    public int getWithdrawLimit() {
        return 1_00_000;
    }

    /**
     * A method which will return type of current account.
     *
     * @return {@value Account#CURRENT}
     */
    @Override
    public String type() {
        return Account.CURRENT;
    }
}