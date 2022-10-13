package Helper;

import Accounts.Account;
import Database.Database;

import java.util.Objects;
import java.util.Scanner;

public final class LoginHandle {
    private final Scanner sc = new Scanner(System.in);
    private Account account;
    private boolean isLoggedIn = false;

    public LoginHandle() {
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
        System.out.print("Enter your account number : ");
        accNo = sc.nextInt();
        if (!Database.isAccountExist(accNo)) {
            System.out.println();
            System.out.println("Sorry, No account with account number " + accNo);
            System.out.println();
            return;
        }
        dbPassword = Database.getPasswordForAcc(accNo);
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
        forgetPasswordReset(accNo);
    }

    private void forgetPasswordReset(int accNo) {
        char forgotPassword;
        System.out.println();
        System.out.print("Did you forget your password ? [Y/n] > ");
        forgotPassword = sc.next().charAt(0);
        System.out.println();
        if (forgotPassword == 'n' || forgotPassword == 'N') {
            System.out.println("Login Unsuccessful.");
        } else if (forgotPassword == 'y' || forgotPassword == 'Y') {
            sc.nextLine();
            int correctCounts = 0;
            String answer;
            var qusAndAns = Database.getForgotQusAndAns(accNo);
            assert qusAndAns != null;
            String[] questionIDs = qusAndAns.qusIDs.split(ForgetPasswordHandler.QusAnsPair.separator);
            String[] answers = qusAndAns.answers.split(ForgetPasswordHandler.QusAnsPair.separator);

            for (int i = 0; i < questionIDs.length; i++) {
                System.out.print(ForgetPasswordHandler.getQuestionByID(questionIDs[i].charAt(0)) + " > ");
                answer = sc.nextLine();
                if (Objects.equals(answer, answers[i])) correctCounts++;
                if (correctCounts == ForgetPasswordHandler.minNoOfQus) break;
            }

            if (correctCounts >= ForgetPasswordHandler.minNoOfQus) {
                Account acc = Database.getAccount(accNo);
                assert acc != null;
                System.out.println();
                acc.generatePassword();
                acc.updateInfoInDatabase();
                System.out.println();
                System.out.println("Password updated SUCCESSFULLY.");
            } else {
                System.out.println();
                System.out.println("Wrong answers given.");
                System.out.println("Login Unsuccessful.");
            }
        } else {
            System.out.println("Login Unsuccessful.");
        }
        System.out.println();
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
        account.updateInfoInDatabase();
    }

}
