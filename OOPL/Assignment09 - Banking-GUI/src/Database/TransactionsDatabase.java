package Database;

import Helper.BankHelper.Transactions.Transaction;

import java.io.*;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Objects;

public final class TransactionsDatabase {

    private static final String transactionsPath = "./src/Database/transactions.csv";
    private static final File transactionsFile = new File(transactionsPath);

    private static final Map<String, Integer> transactionsColumns = Map.of(
            "accountNo", 0,
            "datetime", 1,
            "transaction", 2,
            "depositAmount", 3,
            "withdrawAmount", 4,
            "balance", 5,
            "status", 6,
            "note", 7);

    public static void addTransaction(int accountNo, String datetime, String transaction,
            double depositAmount, double withdrawAmount, double balance, String status, String note) {
        StringBuffer sb = new StringBuffer();
        String stream;
        try {
            transactionsFile.createNewFile();
            BufferedReader br = new BufferedReader(new FileReader(transactionsPath));
            sb.append(accountNo)
                    .append(",")
                    .append(datetime.replace(',', '_'))
                    .append(",")
                    .append(transaction)
                    .append(",")
                    .append(depositAmount)
                    .append(",")
                    .append(withdrawAmount)
                    .append(",")
                    .append(balance)
                    .append(",")
                    .append(status)
                    .append(",")
                    .append(note)
                    .append("\n");

            while ((stream = br.readLine()) != null)
                sb.append(stream).append("\n");
            br.close();

            PrintWriter pw = new PrintWriter(new FileOutputStream(transactionsFile, false));
            pw.print(sb);
            pw.close();
        } catch (Exception ignored) {
        }
    }

    public static void addTransaction(Transaction transaction) {
        addTransaction(transaction.accountNo,
                transaction.dateTime,
                transaction.transaction,
                transaction.depositAmount,
                transaction.withdrawAmount,
                transaction.balance,
                transaction.status,
                transaction.note);
    }

    public static List<Transaction> getTransactions(int accountNo, boolean forCustomer) {
        List<Transaction> transactions = new ArrayList<>();

        try {
            BufferedReader br = new BufferedReader(new FileReader(transactionsPath));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (accountNo == Integer.parseInt(data[transactionsColumns.get("accountNo")]) &&
                        (!forCustomer
                                || Objects.equals(data[transactionsColumns.get("status")], Transaction.SUCCESS))) {
                    transactions.add(
                            new Transaction(
                                    data[transactionsColumns.get("accountNo")],
                                    data[transactionsColumns.get("datetime")],
                                    data[transactionsColumns.get("transaction")],
                                    data[transactionsColumns.get("depositAmount")],
                                    data[transactionsColumns.get("withdrawAmount")],
                                    data[transactionsColumns.get("balance")],
                                    data[transactionsColumns.get("status")],
                                    data[transactionsColumns.get("note")]));
                }
            }
            br.close();
        } catch (Exception ignored) {
        }
        return transactions;
    }

    public static List<Transaction> getAllTransactions() {
        List<Transaction> transactions = new ArrayList<>();

        try {
            BufferedReader br = new BufferedReader(new FileReader(transactionsPath));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                transactions.add(
                        new Transaction(
                                data[transactionsColumns.get("accountNo")],
                                data[transactionsColumns.get("datetime")],
                                data[transactionsColumns.get("transaction")],
                                data[transactionsColumns.get("depositAmount")],
                                data[transactionsColumns.get("withdrawAmount")],
                                data[transactionsColumns.get("balance")],
                                data[transactionsColumns.get("status")],
                                data[transactionsColumns.get("note")]));
            }
            br.close();
        } catch (Exception ignored) {
        }
        return transactions;
    }
}
