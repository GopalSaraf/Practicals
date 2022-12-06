package Helper.CustomerHelper;

import Accounts.Account;
import Database.AccountsDatabase;
import ExceptionHandling.*;

public final class Valid {

    private static final boolean validation = true;

    public static boolean isValidName(String name) { // Name validation
        if (!validation)
            return true;
        return name.matches("^[\\p{L} .'-]+$");
    }

    public static boolean isValidAge(String ageStr) {
        try {
            int age = Integer.parseInt(ageStr);
            if (!validation)
                return true;
            return age >= 18 && age < 120;
        } catch (Exception ignored) {
            return false;
        }
    }

    public static boolean isValidMobile(String mobileNo) { // Mobile number validation
        if (!validation)
            return true;
        return mobileNo.matches("[0-9]{10}");
    }

    public static boolean isValidMail(String mailID) { // Mail ID validation
        if (!validation)
            return true;
        return mailID.matches("^[a-zA-Z0-9_+&*-]+(?:\\.[a-zA-Z0-9_+&*-]+)" +
                "*@(?:[a-zA-Z0-9-]+\\.)+[a-zA-Z]{2,7}$");
    }

    public static boolean isValidAccNo(int accNo) {
        return !AccountsDatabase.isAccountExist(accNo);
    }

    public static boolean isValidUsername(String username) {
        if (!validation)
            return true;

        /*
        Regex username explanation :

        ^[a-zA-Z0-9]        # start with an alphanumeric character
        (                   # start of (group 1)
            [._-](?![._-])  # follow by a dot, hyphen, or underscore, negative lookahead to
                            # ensures dot, hyphen, and underscore does not appear consecutively
            |               # or
            [a-zA-Z0-9]     # an alphanumeric character
        )                   # end of (group 1)
        {2,18}              # ensures the length of (group 1) between 2 and 18
        [a-zA-Z0-9]$        # end with an alphanumeric character

                            # {2,18} plus the first and last alphanumeric characters,
                            # total length became {4,20}
        */

        String regex = "^[a-zA-Z0-9]([._-](?![._-])|[a-zA-Z0-9]){3,18}[a-zA-Z0-9]$";

        return username.matches(regex);
    }

    public static boolean isValidPassword(String passwordStr) {
        if (!validation)
            return true;

        /*
        Regex password explanation :

        ^                                 # start of line
        (?=.*[0-9])                       # positive lookahead, digit [0-9]
        (?=.*[a-z])                       # positive lookahead, one lowercase character [a-z]
        (?=.*[A-Z])                       # positive lookahead, one uppercase character [A-Z]
        (?=.*[!@#&()–[{}]:;',?/*~$^+=<>]) # positive lookahead, one of the special character in this [..]
        .                                 # matches anything
        {4,20}                            # length at least 4 characters and maximum of 20 characters
        $                                 # end of line
        */

        String regex = "^(?=.*[0-9])(?=.*[a-z])(?=.*[A-Z])(?=.*[!@#&()–[{}]:;',?/*~$^+=<>]).{8,20}$";

        return passwordStr.matches(regex);
    }

    public static boolean isValidDeposit(Account account, String depositAmtStr) throws AccountException {
        double depositAmt;
        try {
            depositAmt = Double.parseDouble(depositAmtStr);
        } catch (Exception ignored) {
            throw new InvalidValueException("Invalid amount entered.");
        }
        if (depositAmt <= 0)
            throw new NegativeAmountException("Invalid amount (Amount should be greater than 0)!");
        if (account.getBalance() + depositAmt < account.getMinBalance())
            throw new InsufficientFundException("Invalid amount (Minimum balance in account should be "
                    + account.getMinBalance() + ")!");
        return true;
    }

    public static boolean isValidWithdraw(Account account, String withdrawAmtStr) throws AccountException {
        double withdrawAmt;
        try {
            withdrawAmt = Double.parseDouble(withdrawAmtStr);
        } catch (Exception ignored) {
            throw new InvalidValueException("Invalid amount entered.");
        }
        if (withdrawAmt <= 0)
            throw new NegativeAmountException("Invalid amount (Amount should be greater than 0)!");
        if (account.getBalance() - withdrawAmt < account.getMinBalance())
            throw new InsufficientFundException("Invalid amount (Minimum balance in account should be "
                    + account.getMinBalance() + ")!");
        if (withdrawAmt > account.getWithdrawLimit())
            throw new WithdrawLimitException("Invalid amount (Maximum balance of withdrawal should be "
                    + account.getWithdrawLimit() + ")!");
        return true;
    }

    public static boolean isValidTransfer(Account account, String transferAmtStr) throws AccountException {
        double transferAmt;
        try {
            transferAmt = Double.parseDouble(transferAmtStr);
        } catch (Exception ignored) {
            throw new InvalidValueException("Invalid amount entered.");
        }
        if (transferAmt <= 0)
            throw new NegativeAmountException("Invalid amount (Amount should be greater than 0)!");
        if (account.getBalance() - transferAmt < account.getMinBalance())
            throw new InsufficientFundException("Invalid amount (Minimum balance in account should be "
                    + account.getMinBalance() + ")");
        return true;
    }
}
