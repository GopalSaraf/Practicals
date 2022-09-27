import java.util.ArrayList;
import java.util.Scanner;

public class Bank {
    private final String bankName = "PICT BANK";
    private static long bankAmount = 0;
    private static int noOfAccounts = 0;
    private static ArrayList<Account> accounts = new ArrayList<Account>();
    private final Scanner sc = new Scanner(System.in);

    public void createAccount() {
        char accountType;
        System.out.println("Choose which account type you want to create : ");
        System.out.println("a - Saving Account");
        System.out.println("b - Current Account");
        System.out.print("Your option [a/b] > ");
        accountType = sc.next().charAt(0);
        switch (accountType) {
            case 'a' -> {
                SavingAccount savAcc = new SavingAccount();
                savAcc.setData();
                savAcc.getData();
            }
            case 'b' -> {
                CurrentAccount currAcc = new CurrentAccount();
                currAcc.setData();
                currAcc.getData();
            }
            default -> {
                System.out.println("Incorrect option.");
            }
        }
    }
}
