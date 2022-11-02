package Helper.CustomerHelper;

import Accounts.Account;
import Database.AccountsDatabase;
import Helper.BankHelper.Transactions;

import java.util.Objects;
import java.util.Scanner;

public final class CustomerLogin {
    private final Scanner sc = new Scanner(System.in);
    private Account account;
    private boolean isLoggedIn = false;

    public CustomerLogin() {
        login();
    }

    public void handle() {
        char option;
        while (isConnectionActive()) {
            System.out.println();
            System.out.println("Please choose an option from below :");
            System.out.println("a - Transfer money");
            System.out.println("b - Deposit money");
            System.out.println("c - Withdraw money");
            System.out.println("d - Show available balance");
            System.out.println("e - Show profile");
            System.out.println("f - Show bank statement");
            System.out.println("g - Update profile");
            System.out.println("h - Logout");
            System.out.println();
            System.out.print("Your Choice [a/b/c/d/e/f/g/h] > ");
            option = sc.next().charAt(0);

            switch (option) {
                case 'a' -> this.transfer();
                case 'b' -> this.deposit();
                case 'c' -> this.withdraw();
                case 'd' -> this.showBalance();
//                case 'e' -> this.getData();
                case 'f' -> this.getStatement();
//                case 'g' -> this.updateProfile();
                case 'h' -> this.logout();
                default -> {
                    System.out.println();
                    System.out.println("Incorrect Option. Try again...");
                }
            }
        }
    }

    private boolean isConnectionActive() {
        return isLoggedIn;
    }

    private void deposit() {
        account.deposit();
    }

    private void withdraw() {
        account.withdraw();
    }

    private void transfer() {
        account.transfer();
    }

    private void showBalance() {
        System.out.println();
        System.out.println("Available balance : " + Transactions.currency(account.getBalance()));
    }

//    private void getData() {
//        account.getData();
//    }

    private void getStatement() {
        account.getStatement();
    }

//    private void updateProfile() {
//        account.updateAccount();
//    }

    private void login() {
        int accNo, userPassword, dbPassword, wrongCounts, noOfChances = 3;
        System.out.print("Enter your account number : ");
        while (true) {
            String accNoStr = sc.next();
            try {
                accNo = Integer.parseInt(accNoStr);
                break;
            } catch (Exception exception) {
                System.out.print("Enter valid account number : ");
            }
        }
        if (!AccountsDatabase.isAccountExist(accNo)) {
            System.out.println();
            System.out.println("Sorry, No account with account number " + accNo);
            System.out.println();
            return;
        }
        dbPassword = AccountsDatabase.getPasswordForAcc(accNo);
        wrongCounts = 0;
        while (wrongCounts < noOfChances) {
            System.out.print("Enter your password ");
            if (!(wrongCounts == 0))
                System.out.print("(" + "Remaining attempts - " + (noOfChances - wrongCounts) + ") ");
            System.out.print(": ");
            userPassword = sc.nextInt();
            if (userPassword == dbPassword) {
                account = AccountsDatabase.getAccount(accNo);
                isLoggedIn = true;
                System.out.println();
                System.out.print("SUCCESSFULLY LOGGED IN. ");
                System.out.println("Welcome " + account.getName() + ".");
                return;
            }
            wrongCounts++;
        }
//        forgetPasswordReset(accNo);
    }

//    private void forgetPasswordReset(int accNo) {
//        char forgotPassword;
//        System.out.println();
//        System.out.print("Did you forget your password ? [Y/n] > ");
//        forgotPassword = sc.next().charAt(0);
//        System.out.println();
//        if (forgotPassword == 'n' || forgotPassword == 'N') {
//            System.out.println("Login Unsuccessful.");
//        } else if (forgotPassword == 'y' || forgotPassword == 'Y') {
//            sc.nextLine();
//            int correctCounts = 0;
//            String answer;
//            var qusAndAns = AccountsDatabase.getForgotQusAndAns(accNo);
//            assert qusAndAns != null;
//            String[] questionIDs = qusAndAns.qusIDs.split(ForgetPasswordHandler.QusAnsPair.separator);
//            String[] answers = qusAndAns.answers.split(ForgetPasswordHandler.QusAnsPair.separator);
//
//            for (int i = 0; i < questionIDs.length; i++) {
//                System.out.print(ForgetPasswordHandler.getQuestionByID(questionIDs[i].charAt(0)) + " > ");
//                answer = sc.nextLine();
//                if (Objects.equals(answer, answers[i]))
//                    correctCounts++;
//                if (correctCounts == ForgetPasswordHandler.minNoOfQus)
//                    break;
//            }
//
//            if (correctCounts >= ForgetPasswordHandler.minNoOfQus) {
//                Account acc = AccountsDatabase.getAccount(accNo);
//                assert acc != null;
//                System.out.println();
//                acc.generatePassword();
//                acc.updateInfoInDatabase();
//                System.out.println();
//                System.out.println("Password updated SUCCESSFULLY.");
//            } else {
//                System.out.println();
//                System.out.println("Wrong answers given.");
//                System.out.println("Login Unsuccessful.");
//            }
//        } else {
//            System.out.println("Login Unsuccessful.");
//        }
//        System.out.println();
//    }

    private void logout() {
        System.out.println();
        account = null;
        isLoggedIn = false;
        System.out.println("SUCCESSFULLY LOGGED OUT.");
        System.out.println();
    }
}
