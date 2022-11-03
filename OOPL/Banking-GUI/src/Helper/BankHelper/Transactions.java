package Helper.BankHelper;

import Accounts.Account;
import Database.TransactionsDatabase;
import ExceptionHandling.AccountException;

import java.text.NumberFormat;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.Objects;

import static Helper.CustomerHelper.Valid.*;

public final class Transactions {

    public static Transaction deposit(Account account, String depositAmountStr, String note) {
        String status = Transaction.PROCESSING;
        String reason = "";
        String errorMsg = "";
        double depositAmount = 0;

        try {
            if (isValidDeposit(account, depositAmountStr)) {
                depositAmount = Double.parseDouble(depositAmountStr);
                account.depositAmount(depositAmount);
                status = Transaction.SUCCESS;
            }
        } catch (AccountException e) {
            errorMsg = e.getMessage();
            status = Transaction.FAIL;
            reason = e.getShortMessage();
        }

        if (!Objects.equals(reason, "")) {
            status += " - ";
            status += reason;
        }

        var deposit = new Transaction(account.getAccountNo(), LocalDateTime.now(), Transaction.DEPOSIT,
                depositAmount, 0, account.getBalance(), status, note);
        TransactionsDatabase.addTransaction(deposit);

        if (!Objects.equals(errorMsg, ""))
            deposit.setErrorMsg(errorMsg);

        return deposit;
    }

    public static Transaction withdraw(Account account, String withdrawAmountStr, String note) {
        String status = Transaction.PROCESSING;
        String reason = "";
        String errorMsg = "";
        double withdrawAmount = 0;

        try {
            if (isValidWithdraw(account, withdrawAmountStr)) {
                withdrawAmount = Double.parseDouble(withdrawAmountStr);
                account.withdrawAmount(withdrawAmount);
                status = Transaction.SUCCESS;
            }
        } catch (AccountException e) {
            errorMsg = e.getMessage();
            status = Transaction.FAIL;
            reason = e.getShortMessage();
        }

        if (!Objects.equals(reason, "")) {
            status += " - ";
            status += reason;
        }

        var withdraw = new Transaction(account.getAccountNo(), LocalDateTime.now(), Transaction.WITHDRAW,
                0, withdrawAmount, account.getBalance(), status, reason);
        TransactionsDatabase.addTransaction(withdraw);

        if (!Objects.equals(errorMsg, ""))
            withdraw.setErrorMsg(errorMsg);

        return withdraw;
    }

    public static Transaction transfer(Account sender, Account receiver, String transferAmountStr, String note) {
        String status = Transaction.PROCESSING;
        String reason = "";
        String errorMsg = "";
        double transferAmount = 0;

        try {
            if (isValidTransfer(sender, transferAmountStr)) {
                transferAmount = Double.parseDouble(transferAmountStr);
                sender.withdrawAmount(transferAmount);

                sender.updateAccountBalance();
                receiver.updateAccountBalance();

                receiver.depositAmount(transferAmount);

                sender.updateAccountBalance();
                receiver.updateAccountBalance();

                status = Transaction.SUCCESS;
            }
        } catch (AccountException e) {
            errorMsg = e.getMessage();
            status = Transaction.FAIL;
            reason = e.getShortMessage();
        }

        if (!Objects.equals(reason, "")) {
            status += " - ";
            status += reason;
        }

        var withdraw = new Transaction(sender.getAccountNo(), LocalDateTime.now(),
                Transaction.TRANSFER + " to " + receiver,
                0, transferAmount, sender.getBalance(), status, note);
        TransactionsDatabase.addTransaction(withdraw);

        if (status.startsWith(Transaction.SUCCESS)) {
            var deposit = new Transaction(receiver.getAccountNo(), LocalDateTime.now(),
                    Transaction.TRANSFER + " from " + sender,
                    transferAmount, 0, receiver.getBalance(), status, note);
            TransactionsDatabase.addTransaction(deposit);
        }

        if (!Objects.equals(errorMsg, ""))
            withdraw.setErrorMsg(errorMsg);

        return withdraw;
    }

    public static String currency(String money) {
        return currency(Double.parseDouble(money));
    }

    public static String currency(double money) {
        Locale india = new Locale("hi", "IN");
        NumberFormat rupeesFormat = NumberFormat.getCurrencyInstance(india);
        return rupeesFormat.format(money);
    }

    public static class Transaction {

        public static final String DEPOSIT = "Deposited";
        public static final String WITHDRAW = "Withdrawal";
        public static final String TRANSFER = "Transferred";
        public static final String FIRST_DEPOSIT = "Opening Deposit";

        public static final String SUCCESS = "Successful";
        public static final String FAIL = "Unsuccessful";
        public static final String PROCESSING = "Processing";

        private static final DateTimeFormatter DATE_TIME_FORMATTER = DateTimeFormatter.ofPattern("dd MMM_ yyyy HH:mm");

        public int accountNo;
        public String dateTime;
        public String transaction;
        public double depositAmount;
        public double withdrawAmount;
        public double balance;
        public String status;
        public String note;

        public String errorMsg;

        public Transaction(int accountNo, String dateTime, String transaction, double depositAmount,
                           double withdrawAmount, double balance, String status, String note) {
            this.accountNo = accountNo;
            this.dateTime = dateTime;
            this.transaction = transaction;
            this.depositAmount = depositAmount;
            this.withdrawAmount = withdrawAmount;
            this.balance = balance;
            this.status = status;
            this.note = note;
        }

        public Transaction(int accountNo, LocalDateTime dateTime, String transaction, double depositAmount,
                           double withdrawAmount, double balance, String status, String note) {
            this(accountNo, dateTime.format(DATE_TIME_FORMATTER), transaction,
                    depositAmount, withdrawAmount, balance, status, note);
        }

        public Transaction(String accountNo, String dateTime, String transaction, String depositAmount,
                           String withdrawAmount, String balance, String status, String note) {
            this(
                    Integer.parseInt(accountNo),
                    dateTime,
                    transaction,
                    Double.parseDouble(depositAmount),
                    Double.parseDouble(withdrawAmount),
                    Double.parseDouble(balance),
                    status,
                    note);
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
            transactionDetails.add(note);
            return transactionDetails;
        }

        public String getErrorMsg() {
            return errorMsg;
        }

        public void setErrorMsg(String errorMsg) {
            this.errorMsg = errorMsg;
        }
    }
}
