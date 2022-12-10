import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char option;

        while (true) {
            System.out.println();
            System.out.println("Choose array element type"); // Menu
            System.out.println("a - Integer");
            System.out.println("b - String");
            System.out.println("c - Quit program");
            System.out.println();
            System.out.print("Your Option > ");
            option = sc.next().charAt(0);
            System.out.println();

            switch (option) {
                case 'a' -> {
                    MyArray<Integer> arr = new MyArray<>();
                    arr.takeInput();
                    arr.showEven();
                    arr.showOdd();
                    arr.showPrime();
                }
                case 'b' -> {
                    MyArray<String> arr = new MyArray<>();
                    arr.takeInput();
                    arr.showPalindrome();
                }
                case 'c' -> {
                    System.out.println("Exiting...");
                    System.exit(0);
                }
                default -> System.out.println("Incorrect Option. Try again...");
            }
        }
    }
}