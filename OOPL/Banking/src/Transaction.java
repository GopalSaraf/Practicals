import java.text.NumberFormat;
import java.util.Locale;
import java.util.Scanner;

public final class Transaction {
    private static final Scanner sc = new Scanner(System.in);

    public static void deposit(Account account) {
        System.out.println();
        boolean isFirstDeposit = account.getBalance() < account.getMinBalance();
        System.out.print("Enter amount you want to deposit > ");
        double depositAmount = sc.nextDouble();
        System.out.println();

        if (isValidDeposit(account, depositAmount) == 1) {
            System.out.println("Invalid amount (Amount should be greater than 0) .. Deposit failed!");
            return;
        }
        if (isValidDeposit(account, depositAmount) == 2) {
            System.out.println("Invalid amount (Minimum balance in account should be "
                    + account.getMinBalance() + ") .. Deposit failed!");
            return;
        }

        account.depositAmount(depositAmount);
        if (!isFirstDeposit)
            System.out.println("Balance deposited. Available balance : " + currency(account.getBalance()));
    }

    public static void withdraw(Account account) {
        System.out.println();
        System.out.print("Enter amount you want to withdraw > ");
        double withdrawAmount = sc.nextDouble();
        System.out.println();

        if (isValidWithdraw(account, withdrawAmount) == 1) {
            System.out.println("Invalid amount (Amount should be greater than 0) .. Withdrawal failed!");
            return;
        }
        if (isValidWithdraw(account, withdrawAmount) == 2) {
            System.out.println("Invalid amount (Minimum balance in account should be "
                    + account.getMinBalance() + ") .. Withdrawal failed!");
            return;
        }
        if (isValidWithdraw(account, withdrawAmount) == 3) {
            System.out.println("Invalid amount (Maximum balance of withdrawal should be "
                    + account.getWithdrawLimit() + ") .. Withdrawal failed!");
            return;
        }
        account.withdrawAmount(withdrawAmount);
        System.out.println("Balance withdrawal. Available balance : " + currency(account.getBalance()));
    }

    public static void transfer(Account sender) {
        System.out.println();
        System.out.print("Enter account number of receiver > ");
        int recAccNo = sc.nextInt();

        if (Database.isAccountExist(recAccNo)) {
            Account receiver = Database.getAccount(recAccNo);
            assert receiver != null;
            System.out.println();
            System.out.println("Confirm the name of receiver : " + receiver.getName());
            System.out.print("Do you want to continue transfer [Y/n] > ");
            char option = sc.next().charAt(0);
            System.out.println();

            if (option == 'Y' || option == 'y') {
                System.out.print("Enter amount you want to transfer > ");
                double transferAmount = sc.nextDouble();

                if (isValidWithdraw(sender, transferAmount) == 1) {
                    System.out.println("Invalid amount (Amount should be greater than 0) .. Transfer failed!");
                    return;
                }
                if (isValidWithdraw(sender, transferAmount) == 2) {
                    System.out.println("Invalid amount (Minimum balance in account should be "
                            + sender.getMinBalance() + ") .. Transfer failed!");
                    return;
                }
                sender.withdrawAmount(transferAmount);
                receiver.depositAmount(transferAmount);

                System.out.println();
                System.out.println("Balance transferred. Available balance : " + currency(sender.getBalance()));

            } else if (option == 'N' || option == 'n') {
                System.out.println("Transfer cancelled.");
            } else {
                System.out.println("Incorrect option. Transfer cancelled.");
            }
        } else {
            System.out.println();
            System.out.println("Sorry, No account with account number " + recAccNo);
        }
    }

    private static int isValidDeposit(Account account, double depositAmt) {
        if (depositAmt <= 0)
            return 1;
        if (account.getBalance() + depositAmt < account.getMinBalance())
            return 2;
        return 0;
    }

    private static int isValidWithdraw(Account account, double withdrawAmt) {
        if (withdrawAmt <= 0)
            return 1;
        if (account.getBalance() - withdrawAmt < account.getMinBalance())
            return 2;
        if (withdrawAmt > account.getWithdrawLimit())
            return 3;
        return 0;
    }

    public static String currency(double money) {
        Locale india = new Locale("hi", "IN");
        NumberFormat rupeesFormat = NumberFormat.getCurrencyInstance(india);
        return rupeesFormat.format(money);
    }
}
