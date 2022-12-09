import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        BookShopInventory bookShopInventory = new BookShopInventory();
        Scanner sc = new Scanner(System.in);
        char option;

        while (true) {
            System.out.println();
            System.out.println("Choose an option");
            System.out.println("a - Issue a book");
            System.out.println("b - Return a book");
            System.out.println("c - Show available books");
            System.out.println("d - Quit program");
            System.out.println();
            System.out.print("Your Option > ");
            option = sc.next().charAt(0);
            System.out.println();

            switch (option) {
                case 'a' -> bookShopInventory.issueBook();
                case 'b' -> bookShopInventory.returnBook();
                case 'c' -> bookShopInventory.showCurrentBooks();
                case 'd' -> {
                    System.out.println("Exiting...");
                    System.exit(0);
                }
                default -> System.out.println("Incorrect Option. Try again...");
            }
        }
    }
}