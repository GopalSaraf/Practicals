import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Bank bank = new Bank();
        char option;

        while (true) {
            System.out.println("Please choose an option from below :");
            System.out.println("a - Create new account");
            System.out.println("b - Login to your account");
            System.out.println("c - Bank employee login");
            System.out.println("d - Exit program");
            System.out.println();
            System.out.print("Your Choice [a/b/c/d] > ");
            option = sc.next().charAt(0);
            System.out.println();

            switch (option) {
                case 'a' -> bank.createAccount();
                case 'b' -> bank.accountLogin();
                case 'c' -> bank.bankEmployeeLogin();
                case 'd' -> {
                    System.out.println("Exiting Program...");
                    sc.close();
                    System.exit(0);
                }
                default -> {
                    System.out.println();
                    System.out.println("Incorrect Option. Try again...");
                }
            }
        }
    }

//    public static void main(String[] args){
//        var trans = TransactionsDatabase.getTransactions(5678);
//
//        List<String> headersList = new ArrayList<>();
//        headersList.add("Date & Time");
//        headersList.add("Transaction");
//        headersList.add("Debit");
//        headersList.add("Credit");
//        headersList.add("Balance");
//
//        List<List<String>> rowsList = new ArrayList<>();
//
//        for (Transactions.Transaction tran : trans) {
//            rowsList.add(tran.getTransactionList());
//        }
//
//        Statement.show(headersList, rowsList);
//    }
}