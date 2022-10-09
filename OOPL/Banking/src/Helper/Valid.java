package Helper;

import Accounts.Account;
import Database.Database;
import ExceptionHandling.*;

public final class Valid {

    private static final boolean validation = true;

    public static boolean isValidName(String name) { // Name validation
        if (!validation) return true;
        return name.matches("^[\\p{L} .'-]+$");
    }

    public static boolean isValidAge(String ageStr) {
        try {
            int age = Integer.parseInt(ageStr);
            if (!validation) return true;
            return age >= 18 && age < 120;
        } catch (Exception ignored) {
            return false;
        }
    }

    public static boolean isValidMobile(String mobileNo) { // Mobile number validation
        if (!validation) return true;
        return mobileNo.matches("[0-9]{10}");
    }

    public static boolean isValidPassword(String passwordStr) {
        try {
            int password = Integer.parseInt(passwordStr);
            return password >= 1000 && password <= 9999;
        } catch (Exception ignored) {
            return false;
        }
    }

    public static boolean isValidAccNo(int accNo) {
        return !Database.isAccountExist(accNo);
    }

    public static boolean isValidDeposit(Account account, String depositAmtStr) throws AccountException {
        double depositAmt;
        try {
            depositAmt = Double.parseDouble(depositAmtStr);
        } catch (Exception ignored) {
            throw new AccountException(new InvalidValueException("Invalid amount entered."));
        }
        if (depositAmt <= 0)
            throw new AccountException(new NegativeAmountException("Invalid amount (Amount should be greater than 0) .. Deposit failed!"));
        if (account.getBalance() + depositAmt < account.getMinBalance())
            throw new AccountException(new InsufficientFundException("Invalid amount (Minimum balance in account should be " + account.getMinBalance() + ") .. Deposit failed!"));
        return true;
    }

    public static boolean isValidWithdraw(Account account, String withdrawAmtStr) throws AccountException {
        double withdrawAmt;
        try {
            withdrawAmt = Double.parseDouble(withdrawAmtStr);
        } catch (Exception ignored) {
            throw new AccountException(new InvalidValueException("Invalid amount entered."));
        }
        if (withdrawAmt <= 0)
            throw new AccountException(new NegativeAmountException("Invalid amount (Amount should be greater than 0) .. Withdrawal failed!"));
        if (account.getBalance() - withdrawAmt < account.getMinBalance())
            throw new AccountException(new InsufficientFundException("Invalid amount (Minimum balance in account should be " + account.getMinBalance() + ") .. Withdrawal failed!"));
        if (withdrawAmt > account.getWithdrawLimit())
            throw new AccountException(new WithdrawLimitException("Invalid amount (Maximum balance of withdrawal should be " + account.getWithdrawLimit() + ") .. Withdrawal failed!"));
        return true;
    }

    public static boolean isValidTransfer(Account account, String transferAmtStr) throws AccountException {
        double transferAmt;
        try {
            transferAmt = Double.parseDouble(transferAmtStr);
        } catch (Exception ignored) {
            throw new AccountException(new InvalidValueException("Invalid amount entered."));
        }
        if (transferAmt <= 0)
            throw new AccountException(new NegativeAmountException("Invalid amount (Amount should be greater than 0) .. Transfer failed!"));
        if (account.getBalance() - transferAmt < account.getMinBalance())
            throw new AccountException(new InsufficientFundException("Invalid amount (Minimum balance in account should be " + account.getMinBalance() + ") .. Transfer failed!"));
        return true;
    }
}
