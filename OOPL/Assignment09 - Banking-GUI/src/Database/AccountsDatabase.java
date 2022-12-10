package Database;

import Accounts.Account;
import Accounts.CurrentAccount;
import Accounts.SavingAccount;

import java.io.*;
import java.util.*;

public final class AccountsDatabase {
    private static final String accountsPath = "./src/Database/accounts.csv";
    private static final File accountsFile = new File(accountsPath);

    private static final String[] accountsColumnOrderArray = {
            "accountNo",
            "username",
            "password",
            "type",
            "balance",
            "name",
            "dateOfBirth",
            "mobileNo",
            "emailID",
            "forgotPasswordIDs",
            "forgotPasswordAns",
            "openingDateTime"
    };

    private static final List<String> accountsColumnOrder = Arrays.asList(accountsColumnOrderArray);

    public static void addAccount(int accountNo, String username, String password, String type, double balance,
                                  String name,
                                  String dateOfBirth, String mobileNo, String emailID, String forgotPasswordIDs, String forgotPasswordAns,
                                  String openingDateTime) {
        try {
            PrintWriter pw = new PrintWriter(new FileOutputStream(accountsFile, true));
            pw.append(String.valueOf(accountNo))
                    .append(",")
                    .append(username)
                    .append(",")
                    .append(String.valueOf(password))
                    .append(",")
                    .append(type)
                    .append(",")
                    .append(String.valueOf(balance))
                    .append(",")
                    .append(name)
                    .append(",")
                    .append(dateOfBirth.replace(',', '_'))
                    .append(",")
                    .append(mobileNo)
                    .append(",")
                    .append(emailID)
                    .append(",")
                    .append(forgotPasswordIDs)
                    .append(",")
                    .append(forgotPasswordAns)
                    .append(",")
                    .append(openingDateTime.replace(',', '_'))
                    .append("\n");
            pw.close();
        } catch (Exception exception) {
            System.out.println(exception.getMessage());
        }
    }

    public static void addAccount(Account acc) {
        addAccount(
                acc.getAccountNo(),
                acc.getUsername(),
                acc.getPassword(),
                acc.type(),
                acc.getBalance(),
                acc.getName(),
                acc.getDateOfBirth(),
                acc.getMobileNo(),
                acc.getEmailID(),
                acc.getForgotPasswordIDs(),
                acc.getForgotPasswordAns(),
                acc.getOpeningDateTime());
    }

    public static Map<String, String> getAccountInfo(int accountNo) {
        try {
            Map<String, String> accountDetails = new HashMap<>();
            BufferedReader br = new BufferedReader(new FileReader(accountsPath));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (accountNo == Integer.parseInt(data[accountsColumnOrder.indexOf("accountNo")])) {
                    for (int i = 0; i < accountsColumnOrder.size(); i++) {
                        String key = accountsColumnOrder.get(i);
                        String value = data[accountsColumnOrder.indexOf(key)];
                        if (Objects.equals(key, "dateOfBirth"))
                            value = value.replace('_', ',');
                        if (Objects.equals(key, "openingDateTime"))
                            value = value.replace('_', ',');
                        accountDetails.put(key, value);
                    }
                    return accountDetails;
                }
            }
        } catch (Exception exception) {
            System.out.println(exception.getMessage());
        }
        return null;
    }

    public static Account getAccount(int accountNo) {
        Map<String, String> accountInfo = getAccountInfo(accountNo);
        if (accountInfo == null)
            return null;
        Account acc;
        String username = accountInfo.get("username");
        String password = accountInfo.get("password");
        double balance = Double.parseDouble(accountInfo.get("balance"));
        String name = accountInfo.get("name");
        String dateOfBirth = accountInfo.get("dateOfBirth");
        String mobileNo = accountInfo.get("mobileNo");
        String emailID = accountInfo.get("emailID");
        String forgotPasswordIDs = accountInfo.get("forgotPasswordIDs");
        String forgotPasswordAns = accountInfo.get("forgotPasswordAns");
        String openingDateTime = accountInfo.get("openingDateTime");
        if (Objects.equals(accountInfo.get("type"), Account.SAVING))
            acc = new SavingAccount(name, dateOfBirth, mobileNo, emailID, balance);
        else if (Objects.equals(accountInfo.get("type"), Account.CURRENT))
            acc = new CurrentAccount(name, dateOfBirth, mobileNo, emailID, balance);
        else
            acc = new Account(name, dateOfBirth, mobileNo, emailID, balance);
        acc.setAccountNo(accountNo);
        acc.setUsername(username);
        acc.setPassword(password);
        acc.setForgotPasswordIDs(forgotPasswordIDs);
        acc.setForgotPasswordAns(forgotPasswordAns);
        acc.setOpeningDateTime(openingDateTime);
        return acc;
    }

    public static void updateBalance(int accountNo, double newBalance) {
        StringBuffer sb = new StringBuffer();
        try {
            BufferedReader br = new BufferedReader(new FileReader(accountsPath));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (accountNo == Integer.parseInt(data[accountsColumnOrder.indexOf("accountNo")])) {
                    StringBuilder row = new StringBuilder();
                    for (int i = 0; i < accountsColumnOrder.size(); i++) {
                        if (i == accountsColumnOrder.indexOf("balance")) {
                            row.append(newBalance);
                        } else {
                            row.append(data[i]);
                        }
                        if (!(i == accountsColumnOrder.size() - 1)) {
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
        } catch (Exception exception) {
            System.out.println(exception.getMessage());
        }
    }

    public static void updateAccount(int accountNo, String username, String password,
                                     String name, String dateOfBirth, String mobileNo, String emailID) {
        StringBuffer sb = new StringBuffer();
        try {
            BufferedReader br = new BufferedReader(new FileReader(accountsPath));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (accountNo == Integer.parseInt(data[accountsColumnOrder.indexOf("accountNo")])) {
                    StringBuilder row = new StringBuilder();
                    for (int i = 0; i < accountsColumnOrder.size(); i++) {
                        if (i == accountsColumnOrder.indexOf("username")) {
                            row.append(username);
                        } else if (i == accountsColumnOrder.indexOf("password")) {
                            row.append(password);
                        } else if (i == accountsColumnOrder.indexOf("name")) {
                            row.append(name);
                        } else if (i == accountsColumnOrder.indexOf("dateOfBirth")) {
                            row.append(dateOfBirth.replace(',', '_'));
                        } else if (i == accountsColumnOrder.indexOf("mobileNo")) {
                            row.append(mobileNo);
                        } else if (i == accountsColumnOrder.indexOf("emailID")) {
                            row.append(emailID);
                        } else {
                            row.append(data[i]);
                        }
                        if (!(i == accountsColumnOrder.size() - 1)) {
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
        } catch (Exception exception) {
            System.out.println(exception.getMessage());
        }
    }

    public static void deleteAccount(int accountNo) {
        StringBuffer sb = new StringBuffer();
        try {
            BufferedReader br = new BufferedReader(new FileReader(accountsFile));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (accountNo != Integer.parseInt(data[accountsColumnOrder.indexOf("accountNo")]))
                    sb.append(stream).append("\n");
            }
            br.close();
            PrintWriter pw = new PrintWriter(new FileOutputStream(accountsFile, false));
            pw.print(sb);
            pw.close();
        } catch (Exception exception) {
            System.out.println(exception.getMessage());
        }
    }

    /**
     * To check if account exist in database or not
     *
     * @param accountNo A {@code int} Account number
     * @return A {@code boolean} value {@code true} if account exist with given
     * account number else {@code false}
     */
    public static boolean isAccountExist(int accountNo) {
        try {
            BufferedReader br = new BufferedReader(new FileReader(accountsPath));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (accountNo == Integer.parseInt(data[accountsColumnOrder.indexOf("accountNo")])) {
                    return true;
                }
            }
        } catch (Exception exception) {
            System.out.println(exception.getMessage());
        }
        return false;
    }

    public static boolean isUsernameUnique(String username) {
        try {
            BufferedReader br = new BufferedReader(new FileReader(accountsPath));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (Objects.equals(username, data[accountsColumnOrder.indexOf("username")])) {
                    return false;
                }
            }
        } catch (Exception exception) {
            System.out.println(exception.getMessage());
        }
        return true;
    }

    public static String getPasswordForAcc(int accountNo) {
        return Objects.requireNonNull(getAccountInfo(accountNo)).get("password");
    }

    public static String getPasswordForAcc(String username) {
        return Objects.requireNonNull(getAccountInfo(getAccNoByUsername(username))).get("password");
    }

    public static String getUsernameForAcc(int accountNo) {
        return Objects.requireNonNull(getAccountInfo(accountNo)).get("username");
    }

    private static int getAccNoByGivenStr(String givenStr, String compareWith) {
        try {
            BufferedReader br = new BufferedReader(new FileReader(accountsPath));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                if (Objects.equals(givenStr, data[accountsColumnOrder.indexOf(compareWith)])) {
                    return Integer.parseInt(data[accountsColumnOrder.indexOf("accountNo")]);
                }
            }
        } catch (Exception exception) {
            System.out.println(exception.getMessage());
        }
        return -1;
    }

    public static int getAccNoByUsername(String username) {
        return getAccNoByGivenStr(username, "username");
    }

    public static int getAccNoByMobile(String mobile) {
        return getAccNoByGivenStr(mobile, "mobileNo");
    }

    public static int getAccNoByEmail(String email) {
        return getAccNoByGivenStr(email, "emailID");
    }

    public static List<Account> getAllAccounts() {
        List<Account> accounts = new ArrayList<>();
        try {
            BufferedReader br = new BufferedReader(new FileReader(accountsPath));
            String stream;
            while ((stream = br.readLine()) != null) {
                String[] data = stream.split(",");
                int accNo = Integer.parseInt(data[accountsColumnOrder.indexOf("accountNo")]);
                accounts.add(getAccount(accNo));
            }
        } catch (Exception exception) {
            System.out.println(exception.getMessage());
        }
        return accounts;
    }
}