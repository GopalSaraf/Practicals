// Problem Statement :
// Identify commonalities and differences between Publication, Book and Magazine classes. 
// Title, Price, Copies are common instance variables and saleCopy is common method. 
// The differences are, Book class has author and orderCopies. Magazine Class has orderQty, 
// Currentissue, reciveissue. Write a program to find how many copies of the given books are 
// ordered and display total sale of publication.

// Program by : 23168 Gopal Saraf

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        var book = new Book();              // Book object
        var magazine = new Magazine();      // Magazine object
        char option;

        while (true) {
            System.out.println();           // Menu
            System.out.println("Choose an option : ");
            System.out.println("a - Order a book");
            System.out.println("b - Order a magazine");
            System.out.println("c - Total book sell");
            System.out.println("d - Total magazine sell");
            System.out.println("e - Total publication sell");
            System.out.println("f - Exit program");
            System.out.println();
            System.out.print("Your Choice > ");
            option = sc.next().charAt(0);

            switch (option) {
                case 'a' -> {               // Order a book
                    book.getData();
                    book.sellCopy();
                }
                case 'b' -> {               // Order a magazine
                    magazine.getData();
                    magazine.sellCopy();
                }
                case 'c' -> {               // Total book sell
                    Book.getTotalSell();
                }
                case 'd' -> {
                    Magazine.getTotalSell();  // Total magazine sell
                }
                case 'e' -> {
                    Publication.getTotalSell();  // Total publication sell
                }
                case 'f' -> {
                    System.out.println("Exiting Program...");
                    System.exit(0);
                }
                default -> {
                    System.out.println("Incorrect Option. Try again...");
                    System.out.println();
                }
            }
        }
    }
}



