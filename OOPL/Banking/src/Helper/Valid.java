package Helper;

import Accounts.Account;
import Database.Database;
import ExceptionHandling.*;

public final class Valid {

    private static final boolean validation = true;

    public static boolean isValidName(String name) { // Name validation
        if (!validation)
            return true;
        return name.matches("^[\\p{L} .'-]+$");
    }

    public static boolean isValidAge(int age) {
        if (!validation)
            return true;
        return age >= 18 && age < 120;
    }

    public static boolean isValidMobile(String mobileNo) { // Mobile number validation
        if (!validation)
            return true;
        return mobileNo.matches("[0-9]{10}");
    }

    public static boolean isValidPassword(int password) {
        if (!validation)
            return true;
        return password >= 1000 && password <= 9999;
    }

    public static boolean isValidAccNo(int accNo) {
        return !Database.isAccountExist(accNo);
    }

    public static boolean isValidDeposit(Account account, double depositAmt) throws AccountException {
        if (depositAmt <= 0)
            throw new AccountException(
                    new NegativeAmountException("Invalid amount (Amount should be greater than 0) .. Deposit failed!"));
        if (account.getBalance() + depositAmt < account.getMinBalance())
            throw new AccountException(new InsufficientFundException(
                    "Invalid amount (Minimum balance in account should be " + account.getMinBalance()
                            + ") .. Deposit failed!"));
        return true;
    }

    public static boolean isValidWithdraw(Account account, double withdrawAmt) throws AccountException {
        if (withdrawAmt <= 0)
            throw new AccountException(
                    new NegativeAmountException(
                            "Invalid amount (Amount should be greater than 0) .. Withdrawal failed!"));
        if (account.getBalance() - withdrawAmt < account.getMinBalance())
            throw new AccountException(
                    new InsufficientFundException("Invalid amount (Minimum balance in account should be "
                            + account.getMinBalance() + ") .. Withdrawal failed!"));
        if (withdrawAmt > account.getWithdrawLimit())
            throw new AccountException(
                    new WithdrawLimitException("Invalid amount (Maximum balance of withdrawal should be "
                            + account.getWithdrawLimit() + ") .. Withdrawal failed!"));
        return true;
    }

    public static boolean isValidTransfer(Account account, double withdrawAmt) throws AccountException {
        if (withdrawAmt <= 0)
            throw new AccountException(
                    new NegativeAmountException(
                            "Invalid amount (Amount should be greater than 0) .. Withdrawal failed!"));
        if (account.getBalance() - withdrawAmt < account.getMinBalance())
            throw new AccountException(
                    new InsufficientFundException("Invalid amount (Minimum balance in account should be "
                            + account.getMinBalance() + ") .. Withdrawal failed!"));
        return true;
    }
}
