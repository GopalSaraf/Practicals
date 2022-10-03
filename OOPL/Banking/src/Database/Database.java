package Database;

import Accounts.*;
import Helper.ForgetPasswordHandler.QusAnsPair;

import java.io.*;
import java.util.*;

public final class Database {
    private static final String path = "accounts.txt";
    private static final File file = new File(path);
    private static final Map<String, Integer> columns = Map.of(
            "accNo", 0,
            "password", 1,
            "type", 2,
            "balance", 3,
            "name", 4,
            "age", 5,
            "mobileNo", 6,
            "forgotPasswordID", 7,
            "forgotPasswordAns", 8);
    private static final int noOfColumns = columns.size();

    public static void addAccount(int accNo, int password, String type, double balance, String name, int age,
            String mobileNo, char forgotPasswordID, String forgotPasswordAns) {
        try {
            PrintWriter pw = new PrintWriter(new FileOutputStream(file, true));
            pw.append(String.valueOf(accNo))
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
                    .append(forgotPasswordID)
                    .append(",")
                    .append(forgotPasswordAns)
                    .append("\n");
            pw.close();
        } catch (Exception ignored) {
        }
    }

    public static void addAccount(Account acc) {
        String type = "";
        if (acc instanceof SavingAccount) {
            type = "saving";
        } else if (acc instanceof CurrentAccount) {
            type = "current";
        }
        addAccount(
                acc.getAccountNo(),
                acc.getPassword(),
                type,
                acc.getBalance(),
                acc.getName(),
                acc.getAge(),
                acc.getMobileNo(),
                acc.getForgotPasswordID(),
                acc.getForgotPasswordAns());
    }

    public static Map<String, String> getAccountInfo(int accNo) {
        try {
            Map<String, String> accountDetails = new HashMap<>(Map.of(
                    "accNo", "",
                    "password", "",
                    "type", "",
                    "balance", "",
                    "name", "",
                    "age", "",
                    "mobileNo", "",
                    "forgotPasswordID", "",
                    "forgotPasswordAns", ""));
            BufferedReader br = new BufferedReader(new FileReader(path));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (accNo == Integer.parseInt(data[columns.get("accNo")])) {
                    for (int i = 0; i < noOfColumns; i++) {
                        String key = accountDetails.keySet().toArray(new String[0])[i];
                        String value = data[columns.get(key)];
                        accountDetails.put(key, value);
                    }
                    return accountDetails;
                }
            }
        } catch (Exception ignored) {
        }
        return null;
    }

    public static Account getAccount(int accNo) {
        Map<String, String> accountInfo = getAccountInfo(accNo);
        if (accountInfo == null)
            return null;
        Account acc;
        int password = Integer.parseInt(accountInfo.get("password"));
        double balance = Double.parseDouble(accountInfo.get("balance"));
        String name = accountInfo.get("name");
        int age = Integer.parseInt(accountInfo.get("age"));
        String mobileNo = accountInfo.get("mobileNo");
        char forgotPasswordID = accountInfo.get("forgotPasswordID").charAt(0);
        String forgotPasswordAns = accountInfo.get("forgotPasswordAns");
        if (Objects.equals(accountInfo.get("type"), "saving"))
            acc = new SavingAccount(name, age, mobileNo, balance);
        else if (Objects.equals(accountInfo.get("type"), "current"))
            acc = new CurrentAccount(name, age, mobileNo, balance);
        else
            acc = new Account(name, age, mobileNo, balance);
        acc.setAccountNo(accNo);
        acc.setPassword(password);
        acc.setForgotPasswordID(forgotPasswordID);
        acc.setForgotPasswordAns(forgotPasswordAns);
        return acc;
    }

    public static void updateBalance(int accNo, double newBalance) {
        StringBuffer sb = new StringBuffer();
        try {
            BufferedReader br = new BufferedReader(new FileReader(path));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (accNo == Integer.parseInt(data[columns.get("accNo")])) {
                    StringBuilder row = new StringBuilder();
                    for (int i = 0; i < noOfColumns; i++) {
                        if (i == columns.get("balance")) {
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
            PrintWriter pw = new PrintWriter(new FileOutputStream(file, false));
            pw.print(sb);
            pw.close();
        } catch (Exception ignored) {
        }
    }

    public static void updateAccount(int accNo, int password, String name, int age, String mobileNo) {
        StringBuffer sb = new StringBuffer();
        try {
            BufferedReader br = new BufferedReader(new FileReader(path));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (accNo == Integer.parseInt(data[columns.get("accNo")])) {
                    StringBuilder row = new StringBuilder();
                    for (int i = 0; i < noOfColumns; i++) {
                        if (i == columns.get("password")) {
                            row.append(password);
                        } else if (i == columns.get("name")) {
                            row.append(name);
                        } else if (i == columns.get("age")) {
                            row.append(age);
                        } else if (i == columns.get("mobileNo")) {
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
            PrintWriter pw = new PrintWriter(new FileOutputStream(file, false));
            pw.print(sb);
            pw.close();
        } catch (Exception ignored) {
        }
    }

    public static boolean isAccountExist(int accNo) {
        try {
            BufferedReader br = new BufferedReader(new FileReader(path));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (accNo == Integer.parseInt(data[columns.get("accNo")])) {
                    return true;
                }
            }
        } catch (Exception ignored) {
        }
        return false;
    }

    public static int getPasswordForAcc(int accNo) {
        return Integer.parseInt(Objects.requireNonNull(getAccountInfo(accNo)).get("password"));
    }

    public static QusAnsPair getForgotQusAndAns(int accNo) {
        Map<String, String> accountInfo = getAccountInfo(accNo);
        if (accountInfo == null)
            return null;
        char forgotPasswordID = accountInfo.get("forgotPasswordID").charAt(0);
        String forgotPasswordAns = accountInfo.get("forgotPasswordAns");
        return new QusAnsPair(forgotPasswordID, forgotPasswordAns);
    }
}