package BankHelper;

import Accounts.Account;
import CustomerHelper.Transactions;
import Database.AccountsDatabase;
import Database.TransactionsDatabase;
import ExceptionHandling.InvalidValueException;

import java.util.ArrayList;
import java.util.List;
import java.util.Objects;
import java.util.Scanner;

public class BankLogin {
    private final int accountNo = 12345;
    private final int accountPassword = 12345;
    private final Scanner sc = new Scanner(System.in);
    private boolean isLoggedIn = false;

    public BankLogin() {
        login();
    }

    public void handle() {
        char option;
        while (isConnectionActive()) {
            System.out.println();
            System.out.println("Please choose an option from below :");
            System.out.println("a - Get current bank information");
            System.out.println("b - Show statement for an account");
            System.out.println("c - Show recent bank transactions");
            System.out.println("d - Update information of an account");
            System.out.println("e - Logout");
            System.out.println();
            System.out.print("Your Choice [a/b/c/d/e] > ");
            option = sc.next().charAt(0);

            switch (option) {
                case 'a' -> this.bankInfo();
                case 'b' -> this.getStatement();
                case 'c' -> this.getRecentTransactions();
                case 'd' -> this.updateInfo();
                case 'e' -> this.logout();
                default -> {
                    System.out.println();
                    System.out.println("Incorrect Option. Try again...");
                }
            }
        }
    }

    private void bankInfo() {
        var accounts = AccountsDatabase.getAllAccounts();
        double totalBalance = 0;
        int currentAccountCount = 0;
        int savingAccountCount = 0;

        List<String> headerList = new ArrayList<>();
        headerList.add("Account Number");
        headerList.add("Balance");
        headerList.add("Account Type");
        headerList.add("Account Name");
        headerList.add("Opening Date & Time");
        headerList.add("Mobile Number");
        headerList.add("Age");

        List<List<String>> rowsList = new ArrayList<>();

        for (Account account : accounts) {
            List<String> row = new ArrayList<>();
            row.add(String.valueOf(account.getAccountNo()));
            row.add(Transactions.currency(account.getBalance()));
            row.add(account.type() + " Account");
            row.add(account.getName());
            row.add(account.getOpeningDateTime());
            row.add(account.getMobileNo());
            row.add(String.valueOf(account.getAge()));
            rowsList.add(row);

            totalBalance += account.getBalance();
            if (Objects.equals(account.type(), Account.SAVING))
                savingAccountCount++;
            else
                currentAccountCount++;
        }

        System.out.println("Current bank details :");
        System.out.println();
        System.out.println("Current bank balance : " + Transactions.currency(totalBalance));
        System.out.println();
        System.out.println("Currently active accounts : " + (savingAccountCount + currentAccountCount));
        System.out.println("Active saving accounts : " + savingAccountCount);
        System.out.println("Active current accounts : " + currentAccountCount);
        System.out.println();
        System.out.println("All accounts details : ");

        TableFormat.show(headerList, rowsList);
    }

    private void getStatement() {
        var customerAcc = getCustomerAccount();
        if (customerAcc == null) return;

        var transactions = TransactionsDatabase.getTransactions(customerAcc.getAccountNo(), false);

        List<String> headersList = new ArrayList<>();
        headersList.add("Date & Time");
        headersList.add("Details");
        headersList.add("Deposits");
        headersList.add("Withdrawals");
        headersList.add("Balance");
        headersList.add("Status");
        headersList.add("Further Details");

        List<List<String>> rowsList = new ArrayList<>();

        for (Transactions.Transaction transaction : transactions) {
            rowsList.add(transaction.getAllTransactionList());
        }

        System.out.println("Bank statement for " + customerAcc);

        TableFormat.show(headersList, rowsList);
    }

    private void getRecentTransactions() {
        var transactions = TransactionsDatabase.getAllTransactions();

        List<String> headersList = new ArrayList<>();
        headersList.add("Account number");
        headersList.add("Date & Time");
        headersList.add("Details");
        headersList.add("Deposits");
        headersList.add("Withdrawals");
        headersList.add("Balance");
        headersList.add("Status");
        headersList.add("Further Details");

        List<List<String>> rowsList = new ArrayList<>();

        for (Transactions.Transaction transaction : transactions) {
            var transactionDetails = transaction.getAllTransactionList();
            transactionDetails.add(0, String.valueOf(transaction.accountNo));
            rowsList.add(transactionDetails);
        }

        System.out.println("Recent bank transactions : ");

        TableFormat.show(headersList, rowsList);
    }

    private void updateInfo() {
        var customerAcc = getCustomerAccount();
        if (customerAcc == null) return;
        customerAcc.updateAccount();
    }

    private void login() {
        System.out.print("Enter account number > ");
        String accNoStr = sc.next();
        try {
            int accNo = Integer.parseInt(accNoStr);
            if (accNo != accountNo)
                throw new InvalidValueException();
        } catch (Exception ignored) {
            System.out.println("Incorrect account number entered.\n");
            return;
        }
        System.out.print("Enter password > ");
        String passwordStr = sc.next();
        try {
            int password = Integer.parseInt(passwordStr);
            if (password != accountPassword)
                throw new InvalidValueException();
        } catch (Exception ignored) {
            System.out.println("Invalid password entered.\n");
            return;
        }
        isLoggedIn = true;
        System.out.println();
        System.out.println("Successfully logged in.");
    }

    private void logout() {
        System.out.println();
        isLoggedIn = false;
        System.out.println("SUCCESSFULLY LOGGED OUT.");
        System.out.println();
    }

    private boolean isConnectionActive() {
        return isLoggedIn;
    }

    private Account getCustomerAccount() {
        String accNoStr;
        int accNo;
        System.out.println();
        System.out.print("Enter account number of customer : ");
        while (true) {
            accNoStr = sc.next();
            try {
                accNo = Integer.parseInt(accNoStr);
                break;
            } catch (Exception exception) {
                System.out.print("Enter valid account number : ");
            }
        }
        if (!AccountsDatabase.isAccountExist(accNo)) {
            System.out.println();
            System.out.println("Sorry, No account with account number " + accNo);
            System.out.println();
            return null;
        }
        return AccountsDatabase.getAccount(accNo);
    }
}
