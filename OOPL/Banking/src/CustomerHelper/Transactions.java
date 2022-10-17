package CustomerHelper;

import Accounts.Account;
import Database.AccountsDatabase;
import Database.TransactionsDatabase;
import ExceptionHandling.AccountException;

import java.text.NumberFormat;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.Scanner;

import static CustomerHelper.Valid.*;

public final class Transactions {

    private static final Scanner sc = new Scanner(System.in);

    public static void deposit(Account account) {
        String depositAmountStr, status = Transaction.PROCESSING;
        double depositAmount = 0;
        String reason = " ";
        boolean isFirstDeposit = account.getBalance() < account.getMinBalance();
        System.out.println();
        System.out.print("Enter amount you want to deposit > ");
        depositAmountStr = sc.next();
        System.out.println();

        try {
            if (isValidDeposit(account, depositAmountStr)) {
                depositAmount = Double.parseDouble(depositAmountStr);
                account.depositAmount(depositAmount);
                status = Transaction.SUCCESS;
                if (!isFirstDeposit)
                    System.out.println("Balance deposited. Available balance : " + currency(account.getBalance()));
            }
        } catch (AccountException e) {
            System.out.println(e.getMessage());
            status = Transaction.FAIL;
            reason = e.getShortMessage();
        }

        var deposit = new Transaction(account.getAccountNo(), LocalDateTime.now(),
                isFirstDeposit ? Transaction.FIRST_DEPOSIT : Transaction.DEPOSIT,
                depositAmount, 0, account.getBalance(), status, reason);
        TransactionsDatabase.addTransaction(deposit);
    }

    public static void withdraw(Account account) {
        String withdrawAmountStr, status = Transaction.PROCESSING;
        double withdrawAmount = 0;
        String reason = " ";
        System.out.println();
        System.out.print("Enter amount you want to withdraw > ");
        withdrawAmountStr = sc.next();
        System.out.println();

        try {
            if (isValidWithdraw(account, withdrawAmountStr)) {
                withdrawAmount = Double.parseDouble(withdrawAmountStr);
                account.withdrawAmount(withdrawAmount);
                System.out.println("Balance withdrawal. Available balance : " + currency(account.getBalance()));
                status = Transaction.SUCCESS;
            }
        } catch (AccountException e) {
            System.out.println(e.getMessage());
            status = Transaction.FAIL;
            reason = e.getShortMessage();
        }

        var withdraw = new Transaction(account.getAccountNo(), LocalDateTime.now(), Transaction.WITHDRAW,
                0, withdrawAmount, account.getBalance(), status, reason);
        TransactionsDatabase.addTransaction(withdraw);
    }

    public static void transfer(Account sender) {
        System.out.println();
        System.out.print("Enter account number of receiver > ");
        int recAccNo = sc.nextInt();

        if (!AccountsDatabase.isAccountExist(recAccNo)) {
            System.out.println();
            System.out.println("Sorry, No account with account number " + recAccNo);
            return;
        }

        Account receiver = AccountsDatabase.getAccount(recAccNo);
        assert receiver != null;

        if (sender.getAccountNo() == receiver.getAccountNo()) {
            System.out.println();
            System.out.println("Sorry, You can't transfer to your own.");
            return;
        }

        System.out.println();
        System.out.println("Confirm the name of receiver : " + receiver.getName());
        System.out.print("Do you want to continue transfer [Y/n] > ");
        char option = sc.next().charAt(0);
        System.out.println();

        if (option == 'N' || option == 'n') {
            System.out.println("Transfer cancelled.");
            return;
        }

        if (option != 'Y' && option != 'y') {
            System.out.println("Incorrect option. Transfer cancelled.");
            return;
        }

        String transferAmountStr, status = Transaction.PROCESSING;
        double transferAmount = 0;
        String reason = " ";

        System.out.print("Enter amount you want to transfer > ");
        transferAmountStr = sc.next();

        try {
            if (isValidTransfer(sender, transferAmountStr)) {
                transferAmount = Double.parseDouble(transferAmountStr);
                sender.withdrawAmount(transferAmount);

                sender.updateAccountBalance();
                receiver.updateAccountBalance();

                receiver.depositAmount(transferAmount);

                sender.updateAccountBalance();
                receiver.updateAccountBalance();

                System.out.println();
                System.out.println("Balance transferred. Available balance : " + currency(sender.getBalance()));

                status = Transaction.SUCCESS;
            }
        } catch (AccountException e) {
            System.out.println(e.getMessage());
            status = Transaction.FAIL;
            reason = e.getShortMessage();
        }

        var withdraw = new Transaction(sender.getAccountNo(), LocalDateTime.now(),
                Transaction.TRANSFER + " to " + receiver,
                0, transferAmount, sender.getBalance(), status, reason);
        var deposit = new Transaction(receiver.getAccountNo(), LocalDateTime.now(),
                Transaction.TRANSFER + " from " + sender,
                transferAmount, 0, receiver.getBalance(), status, reason);

        TransactionsDatabase.addTransaction(withdraw);
        TransactionsDatabase.addTransaction(deposit);
    }

    public static class Transaction {

        public static final String DEPOSIT = "Deposited";
        public static final String WITHDRAW = "Withdrawal";
        public static final String TRANSFER = "Transferred";
        public static final String FIRST_DEPOSIT = "Opening Deposit";

        public static final String SUCCESS = "Successful";
        public static final String FAIL = "Unsuccessful";
        public static final String PROCESSING = "Processing";

        private static final DateTimeFormatter DATE_TIME_FORMATTER =
                DateTimeFormatter.ofPattern("dd-MM-yyyy HH:mm");

        public int accountNo;
        public String dateTime;
        public String transaction;
        public double depositAmount;
        public double withdrawAmount;
        public double balance;
        public String status;

        public String reason;

        public Transaction(int accountNo, String dateTime, String transaction, double depositAmount,
                           double withdrawAmount, double balance, String status, String reason) {
            this.accountNo = accountNo;
            this.dateTime = dateTime;
            this.transaction = transaction;
            this.depositAmount = depositAmount;
            this.withdrawAmount = withdrawAmount;
            this.balance = balance;
            this.status = status;
            this.reason = reason;
        }

        public Transaction(int accountNo, LocalDateTime dateTime, String transaction, double depositAmount,
                           double withdrawAmount, double balance, String status, String reason) {
            this(accountNo, dateTime.format(DATE_TIME_FORMATTER), transaction,
                    depositAmount, withdrawAmount, balance, status, reason);
        }

        public Transaction(String accountNo, String dateTime, String transaction, String depositAmount,
                           String withdrawAmount, String balance, String status, String reason) {
            this(
                    Integer.parseInt(accountNo),
                    dateTime,
                    transaction,
                    Double.parseDouble(depositAmount),
                    Double.parseDouble(withdrawAmount),
                    Double.parseDouble(balance),
                    status,
                    reason
            );
        }

        public List<String> getTransactionList() {
            List<String> transactionDetails = new ArrayList<>();
            transactionDetails.add(dateTime);
            transactionDetails.add(transaction);
            transactionDetails.add(depositAmount == 0 ? "" : currency(depositAmount));
            transactionDetails.add(withdrawAmount == 0 ? "" : currency(withdrawAmount));
            transactionDetails.add(currency(balance));
            return transactionDetails;
        }

        public List<String> getAllTransactionList() {
            var transactionDetails = getTransactionList();
            transactionDetails.add(status);
            transactionDetails.add(reason);
            return transactionDetails;
        }
    }

    public static String currency(double money) {
        Locale india = new Locale("hi", "IN");
        NumberFormat rupeesFormat = NumberFormat.getCurrencyInstance(india);
        return rupeesFormat.format(money);
    }
}
