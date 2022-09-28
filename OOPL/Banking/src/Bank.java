import java.util.Scanner;

public class Bank {
    private final Scanner sc = new Scanner(System.in);

    Bank() {
        String bankName = "PICT BANK";
        System.out.println("Welcome to " + bankName);
        System.out.println();
    }

    public void createAccount() {
        char accountType;
        System.out.println();
        System.out.println("Choose which account type you want to create : ");
        System.out.println("a - Saving Account");
        System.out.println("b - Current Account");
        System.out.println();
        System.out.print("Your option [a/b] > ");
        accountType = sc.next().charAt(0);
        System.out.println();

        switch (accountType) {
            case 'a' -> {
                SavingAccount savAcc = new SavingAccount();
                savAcc.setData();
            }
            case 'b' -> {
                CurrentAccount currAcc = new CurrentAccount();
                currAcc.setData();
            }
            default -> {
                System.out.println("Incorrect option.");
                System.out.println();
            }
        }
    }

    public void accountLogin() {
        LoginHandle loginAcc = new LoginHandle();
        char option;
        while (loginAcc.isConnectionActive()) {
            System.out.println();
            System.out.println("Please choose an option from below :");
            System.out.println("a - Transfer money");
            System.out.println("b - Deposit money");
            System.out.println("c - Withdraw money");
            System.out.println("d - Get available balance");
            System.out.println("e - Get profile");
            System.out.println("f - Logout");
            System.out.println();
            System.out.print("Your Choice [a/b/c/d/e] > ");
            option = sc.next().charAt(0);

            switch (option) {
                case 'a' -> {
                    loginAcc.transfer();
                }
                case 'b' -> {
                    loginAcc.deposit();
                }
                case 'c' -> {
                    loginAcc.withdraw();
                }
                case 'd' -> {
                    loginAcc.showBalance();
                }
                case 'e' -> {
                    loginAcc.getData();
                }
                case 'f' -> {
                    loginAcc.logout();
                }
                default -> {
                    System.out.println();
                    System.out.println("Incorrect Option. Try again...");
                }
            }
        }
    }
}