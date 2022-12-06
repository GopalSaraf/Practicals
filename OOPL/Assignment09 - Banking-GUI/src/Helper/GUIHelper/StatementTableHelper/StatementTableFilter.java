package Helper.GUIHelper.StatementTableHelper;

import Database.TransactionsDatabase;
import Helper.BankHelper.Transactions.Transaction;

import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.Date;
import java.util.List;
import java.util.stream.Collectors;

public final class StatementTableFilter {
    private static final SimpleDateFormat dateFormat = new SimpleDateFormat("dd MMM, yyyy");

    public static List<Transaction> getList(int accNo, String filterStr) {

        if (filterStr.equals("Last 10")) {
            var transactions = TransactionsDatabase.getTransactions(accNo, true);
            return transactions.stream().limit(10).collect(Collectors.toList());
        }

        Date starting = null;
        Date ending = null;

        if (filterStr.equals("Last week")) {
            starting = getDateBeforeWeek();
            ending = getToday();
        } else if (filterStr.equals("Last month")) {
            starting = getDateBeforeMonth();
            ending = getToday();
        }

        return getBetweenDates(accNo, starting, ending);
    }

    public static List<Transaction> getList(int accNo, Date starting, Date ending) {
        return getBetweenDates(accNo, starting, ending);
    }

    private static List<Transaction> getBetweenDates(int accNo, Date starting, Date ending) {
        var transactions = TransactionsDatabase.getTransactions(accNo, true);
        List<Transaction> filteredTransactions = new ArrayList<>();
        Date date;

        for (Transaction transaction : transactions) {
            try {
                date = dateFormat.parse(transaction.dateTime.substring(0, 12));
                if (date.compareTo(starting) >= 0 && date.compareTo(ending) <= 0)
                    filteredTransactions.add(transaction);
            } catch (Exception ignored) {
            }
        }
        return filteredTransactions;
    }

    private static Date getToday() {
        return new Date(System.currentTimeMillis());
    }

    private static Date getDateBeforeWeek() {
        Calendar calendar = Calendar.getInstance();
        calendar.add(Calendar.DATE, -7);
        return calendar.getTime();
    }

    private static Date getDateBeforeMonth() {
        Calendar calendar = Calendar.getInstance();
        calendar.add(Calendar.MONTH, -1);
        return calendar.getTime();
    }
}
