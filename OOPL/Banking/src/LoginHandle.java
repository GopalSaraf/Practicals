import java.util.Objects;
import java.util.Scanner;

public final class LoginHandle {
    private Account account;
    private boolean isLoggedIn = false;
    private final Scanner sc = new Scanner(System.in);

    LoginHandle() {
        accInit();
        if (isConnectionActive()) {
            System.out.println();
            System.out.print("SUCCESSFULLY LOGGED IN. ");
            System.out.println("Welcome " + account.getName() + ".");
        }
    }

    public boolean isConnectionActive() {
        return isLoggedIn;
    }

    public void deposit() {
        account.deposit();
    }

    public void withdraw() {
        account.withdraw();
    }

    public void transfer() {
        account.transfer();
    }

    public void showBalance() {
        System.out.println();
        System.out.println("Available balance : " + Transaction.currency(account.getBalance()));
    }

    public void getData() {
        account.getData();
    }

    public void logout() {
        System.out.println();
        account = null;
        isLoggedIn = false;
        System.out.println("SUCCESSFULLY LOGGED OUT.");
        System.out.println();
    }

    private void accInit() {
        int accNo, userPassword, dbPassword, wrongCounts, noOfChances = 3;
        System.out.println();
        System.out.print("Enter your account number : ");
        accNo = sc.nextInt();
        if (!Database.isAccountExist(accNo)) {
            System.out.println();
            System.out.println("Sorry, No account with account number " + accNo);
            System.out.println();
            return;
        }
        dbPassword = getPasswordForAcc(accNo);
        wrongCounts = 0;
        while (wrongCounts < noOfChances) {
            System.out.print("Enter your password ");
            if (!(wrongCounts == 0))
                System.out.print("(" + "Remaining attempts - " + (noOfChances - wrongCounts) + ") ");
            System.out.print(": ");
            userPassword = sc.nextInt();
            if (userPassword == dbPassword) {
                account = Database.getAccount(accNo);
                isLoggedIn = true;
                return;
            }
            wrongCounts++;
        }
        System.out.println();
        System.out.println("Maximum incorrect password exceeded. Try again later...");
        System.out.println();
    }

    private int getPasswordForAcc(int accNo) {
        return Integer.parseInt(Objects.requireNonNull(Database.getAccountInfo(accNo)).get("password"));
    }

    public void updateProfile() {
        char option;
        System.out.println();
        System.out.println("Please choose what do you want to update :");
        System.out.println("a - Name");
        System.out.println("b - Age");
        System.out.println("c - Mobile number");
        System.out.println("d - None of these");
        System.out.println();
        System.out.print("Your Choice [a/b/c] > ");
        option = sc.next().charAt(0);
        System.out.println();

        switch (option) {
            case 'a' -> {
                account.setName();
                System.out.println();
                System.out.println("Name updated SUCCESSFULLY.");
            }
            case 'b' -> {
                account.setAge();
                System.out.println();
                System.out.println("Age updated SUCCESSFULLY.");
            }
            case 'c' -> {
                account.setMobileNo();
                System.out.println();
                System.out.println("Mobile number updated SUCCESSFULLY.");
            }
            case 'd' -> System.out.println("Updating skipped.");
            default -> System.out.println("Incorrect Option. Try again...");

        }
        account.updateInfo();
    }

}
