import Accounts.Account;
import BankHelper.BankLogin;
import CustomerHelper.CustomerLogin;

import java.util.Scanner;

public class Bank {

    Bank() {
        String bankName = "PICT BANK";
        System.out.println("Welcome to " + bankName);
        System.out.println();
    }

    public void createAccount() {
        Account.createAccount();
    }

    public void accountLogin() {
        new CustomerLogin().handle();
    }

    public void bankEmployeeLogin() {
        new BankLogin().handle();
    }
}