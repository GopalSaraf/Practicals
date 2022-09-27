import java.util.Scanner;

public class CurrentAccount extends Account {
    private final int withdrawLimit = 1_00_000;

    private final int minBalance = 5_000;
    private final Scanner sc = new Scanner(System.in);

    @Override
    public void setData() {
        super.setData();
        while (getBalance() < minBalance) {
            deposit();
        }
        System.out.println();
        System.out.println("Your account is created SUCCESSFULLY.");
        System.out.println("Your account number is > " + getAccountNo());
    }

    @Override
    public void getData() {
        super.getData();
        System.out.println("-------- Account Information --------");
        System.out.println();
        System.out.println("Account type   :  Current Account");
        System.out.println("Account Number :  " + getAccountNo());
        System.out.println("Balance        :  " + currency(getBalance()));
        System.out.println();
        System.out.println("------------------**------------------");
    }

    public void deposit() {
        System.out.print("Enter amount you want to deposit > ");
        double depositAmount = sc.nextDouble();
        if (isValidDeposit(depositAmount) == 1) {
            System.out.println("Invalid amount (Amount should be greater than 0) .. Deposit failed!");
            return;
        }
        if (isValidDeposit(depositAmount) == 2) {
            System.out.println(
                    "Invalid amount (Minimum balance in account should be " + minBalance + ") .. Deposit failed!");
            return;
        }
        depositAmount(depositAmount);
        System.out.println("Balance deposited. Available balance > " + currency(getBalance()));
    }

    public void withdraw() {
        System.out.print("Enter amount you want to withdraw > ");
        double withdrawAmount = sc.nextDouble();
        if (isValidWithdraw(withdrawAmount) == 1) {
            System.out.println("Invalid amount (Amount should be greater than 0) .. Withdrawal failed!");
            return;
        }
        if (isValidWithdraw(withdrawAmount) == 2) {
            System.out.println(
                    "Invalid amount (Minimum balance in account should be " + minBalance + ") .. Withdrawal failed!");
            return;
        }
        if (isValidWithdraw(withdrawAmount) == 3) {
            System.out.println("Invalid amount (Maximum balance of withdrawal should be " + withdrawLimit
                    + ") .. Withdrawal failed!");
            return;
        }
        withdrawAmount(withdrawAmount);
        System.out.println("Balance withdrawal. Available balance > " + currency(getBalance()));
    }

    private int isValidDeposit(double depositAmt) {
        if (depositAmt <= 0)
            return 1;
        if (getBalance() + depositAmt < minBalance)
            return 2;
        return 0;
    }

    private int isValidWithdraw(double withdrawAmt) {
        if (withdrawAmt <= 0)
            return 1;
        if (getBalance() - withdrawAmt < minBalance)
            return 2;
        if (withdrawAmt > withdrawLimit)
            return 3;
        return 0;
    }
}
