package Database;

import Accounts.Account;
import Accounts.CurrentAccount;
import Accounts.SavingAccount;
//import Helper.CustomerHelper.ForgetPasswordHandler.QusAnsPair;

import java.io.*;
import java.util.*;

public final class AccountsDatabase {
    private static final String accountsPath = "./src/Database/accounts.csv";
    private static final File accountsFile = new File(accountsPath);

    private static final Map<String, Integer> accountsColumns = Map.of(
            "accountNo", 0,
            "password", 1,
            "type", 2,
            "balance", 3,
            "name", 4,
            "age", 5,
            "mobileNo", 6,
            "forgotPasswordIDs", 7,
            "forgotPasswordAns", 8,
            "datetime", 9);
    private static final int noOfColumns = accountsColumns.size();

    public static void addAccount(int accountNo, int password, String type, double balance, String name, int age,
            String mobileNo, String forgotPasswordIDs, String forgotPasswordAns, String datetime) {
        try {
            PrintWriter pw = new PrintWriter(new FileOutputStream(accountsFile, true));
            pw.append(String.valueOf(accountNo))
                    .append(",")
                    .append(String.valueOf(password))
                    .append(",")
                    .append(type)
                    .append(",")
                    .append(String.valueOf(balance))
                    .append(",")
                    .append(name)
                    .append(",")
                    .append(String.valueOf(age))
                    .append(",")
                    .append(mobileNo)
                    .append(",")
                    .append(forgotPasswordIDs)
                    .append(",")
                    .append(forgotPasswordAns)
                    .append(",")
                    .append(datetime)
                    .append("\n");
            pw.close();
        } catch (Exception ignored) {
        }
    }

    public static void addAccount(Account acc) {
        addAccount(
                acc.getAccountNo(),
                acc.getPassword(),
                acc.type(),
                acc.getBalance(),
                acc.getName(),
                acc.getAge(),
                acc.getMobileNo(),
                acc.getForgotPasswordIDs(),
                acc.getForgotPasswordAns(),
                acc.getOpeningDateTime());
    }

    public static Map<String, String> getAccountInfo(int accountNo) {
        try {
            Map<String, String> accountDetails = new HashMap<>(Map.of(
                    "accountNo", "",
                    "password", "",
                    "type", "",
                    "balance", "",
                    "name", "",
                    "age", "",
                    "mobileNo", "",
                    "forgotPasswordIDs", "",
                    "forgotPasswordAns", "",
                    "datetime", ""));
            BufferedReader br = new BufferedReader(new FileReader(accountsPath));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (accountNo == Integer.parseInt(data[accountsColumns.get("accountNo")])) {
                    for (int i = 0; i < noOfColumns; i++) {
                        String key = accountDetails.keySet().toArray(new String[0])[i];
                        String value = data[accountsColumns.get(key)];
                        accountDetails.put(key, value);
                    }
                    return accountDetails;
                }
            }
        } catch (Exception ignored) {
        }
        return null;
    }

    public static Account getAccount(int accountNo) {
        Map<String, String> accountInfo = getAccountInfo(accountNo);
        if (accountInfo == null)
            return null;
        Account acc;
        int password = Integer.parseInt(accountInfo.get("password"));
        double balance = Double.parseDouble(accountInfo.get("balance"));
        String name = accountInfo.get("name");
        int age = Integer.parseInt(accountInfo.get("age"));
        String mobileNo = accountInfo.get("mobileNo");
        String forgotPasswordIDs = accountInfo.get("forgotPasswordIDs");
        String forgotPasswordAns = accountInfo.get("forgotPasswordAns");
        String datetime = accountInfo.get("datetime");
        if (Objects.equals(accountInfo.get("type"), Account.SAVING))
            acc = new SavingAccount(name, age, mobileNo, balance);
        else if (Objects.equals(accountInfo.get("type"), Account.CURRENT))
            acc = new CurrentAccount(name, age, mobileNo, balance);
        else
            acc = new Account(name, age, mobileNo, balance);
        acc.setAccountNo(accountNo);
        acc.setPassword(password);
        acc.setForgotPasswordIDs(forgotPasswordIDs);
        acc.setForgotPasswordAns(forgotPasswordAns);
        acc.setOpeningDateTime(datetime);
        return acc;
    }

    public static void updateBalance(int accountNo, double newBalance) {
        StringBuffer sb = new StringBuffer();
        try {
            BufferedReader br = new BufferedReader(new FileReader(accountsPath));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (accountNo == Integer.parseInt(data[accountsColumns.get("accountNo")])) {
                    StringBuilder row = new StringBuilder();
                    for (int i = 0; i < noOfColumns; i++) {
                        if (i == accountsColumns.get("balance")) {
                            row.append(newBalance);
                        } else {
                            row.append(data[i]);
                        }
                        if (!(i == noOfColumns - 1)) {
                            row.append(",");
                        }
                    }
                    sb.append(row).append("\n");
                } else {
                    sb.append(stream).append("\n");
                }
            }
            PrintWriter pw = new PrintWriter(new FileOutputStream(accountsFile, false));
            pw.print(sb);
            pw.close();
        } catch (Exception ignored) {
        }
    }

    public static void updateAccount(int accountNo, int password, String name, int age, String mobileNo) {
        StringBuffer sb = new StringBuffer();
        try {
            BufferedReader br = new BufferedReader(new FileReader(accountsPath));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (accountNo == Integer.parseInt(data[accountsColumns.get("accountNo")])) {
                    StringBuilder row = new StringBuilder();
                    for (int i = 0; i < noOfColumns; i++) {
                        if (i == accountsColumns.get("password")) {
                            row.append(password);
                        } else if (i == accountsColumns.get("name")) {
                            row.append(name);
                        } else if (i == accountsColumns.get("age")) {
                            row.append(age);
                        } else if (i == accountsColumns.get("mobileNo")) {
                            row.append(mobileNo);
                        } else {
                            row.append(data[i]);
                        }
                        if (!(i == noOfColumns - 1)) {
                            row.append(",");
                        }
                    }
                    sb.append(row).append("\n");
                } else {
                    sb.append(stream).append("\n");
                }
            }
            PrintWriter pw = new PrintWriter(new FileOutputStream(accountsFile, false));
            pw.print(sb);
            pw.close();
        } catch (Exception ignored) {
        }
    }

    /**
     * To check if account exist in database or not
     *
     * @param accountNo A {@code int} Account number
     * @return A {@code boolean} value {@code true} if account exist with given
     *         account number else {@code false}
     */
    public static boolean isAccountExist(int accountNo) {
        try {
            BufferedReader br = new BufferedReader(new FileReader(accountsPath));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (accountNo == Integer.parseInt(data[accountsColumns.get("accountNo")])) {
                    return true;
                }
            }
        } catch (Exception ignored) {
        }
        return false;
    }

    public static int getPasswordForAcc(int accountNo) {
        return Integer.parseInt(Objects.requireNonNull(getAccountInfo(accountNo)).get("password"));
    }

//    public static QusAnsPair getForgotQusAndAns(int accountNo) {
//        Map<String, String> accountInfo = getAccountInfo(accountNo);
//        if (accountInfo == null)
//            return null;
//        String forgotPasswordIDs = accountInfo.get("forgotPasswordIDs");
//        String forgotPasswordAns = accountInfo.get("forgotPasswordAns");
//        return new QusAnsPair(forgotPasswordIDs, forgotPasswordAns);
//    }

    public static List<Account> getAllAccounts() {
        List<Account> accounts = new ArrayList<>();
        try {
            BufferedReader br = new BufferedReader(new FileReader(accountsPath));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                int accNo = Integer.parseInt(data[accountsColumns.get("accountNo")]);
                accounts.add(getAccount(accNo));
            }
        } catch (Exception ignored) {
        }
        return accounts;
    }
}