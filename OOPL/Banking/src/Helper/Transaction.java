package Helper;

import Accounts.Account;
import Database.Database;
import ExceptionHandling.*;

import java.text.NumberFormat;
import java.util.Locale;
import java.util.Scanner;

import static Helper.Valid.*;

public final class Transaction {
    private static final Scanner sc = new Scanner(System.in);

    public static void deposit(Account account) {
        System.out.println();
        boolean isFirstDeposit = account.getBalance() < account.getMinBalance();
        System.out.print("Enter amount you want to deposit > ");
        double depositAmount = sc.nextDouble();
        System.out.println();

        try {
            if (isValidDeposit(account, depositAmount)) {
                account.depositAmount(depositAmount);
                if (!isFirstDeposit)
                    System.out.println("Balance deposited. Available balance : " + currency(account.getBalance()));
            }
        } catch (AccountException e) {
            System.out.println(e.getCause().getMessage());
        }
    }

    public static void withdraw(Account account) {
        System.out.println();
        System.out.print("Enter amount you want to withdraw > ");
        double withdrawAmount = sc.nextDouble();
        System.out.println();

        try {
            if (isValidWithdraw(account, withdrawAmount)) {
                account.withdrawAmount(withdrawAmount);
                System.out.println("Balance withdrawal. Available balance : " + currency(account.getBalance()));
            }
        } catch (AccountException e) {
            System.out.println(e.getCause().getMessage());
        }
    }

    public static void transfer(Account sender) {
        System.out.println();
        System.out.print("Enter account number of receiver > ");
        int recAccNo = sc.nextInt();

        if (Database.isAccountExist(recAccNo)) {
            Account receiver = Database.getAccount(recAccNo);
            assert receiver != null;
            System.out.println();
            System.out.println("Confirm the name of receiver : " + receiver.getName());
            System.out.print("Do you want to continue transfer [Y/n] > ");
            char option = sc.next().charAt(0);
            System.out.println();

            if (option == 'Y' || option == 'y') {
                System.out.print("Enter amount you want to transfer > ");
                double transferAmount = sc.nextDouble();

                try {
                    if (isValidTransfer(sender, transferAmount)) {
                        sender.withdrawAmount(transferAmount);
                        receiver.depositAmount(transferAmount);

                        System.out.println();
                        System.out.println("Balance transferred. Available balance : " + currency(sender.getBalance()));
                    }
                } catch (AccountException e) {
                    System.out.println(e.getCause().getMessage());
                }
            } else if (option == 'N' || option == 'n') {
                System.out.println("Transfer cancelled.");
            } else {
                System.out.println("Incorrect option. Transfer cancelled.");
            }
        } else {
            System.out.println();
            System.out.println("Sorry, No account with account number " + recAccNo);
        }
    }

    public static String currency(double money) {
        Locale india = new Locale("hi", "IN");
        NumberFormat rupeesFormat = NumberFormat.getCurrencyInstance(india);
        return rupeesFormat.format(money);
    }
}
