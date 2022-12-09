// Implement and apply Strategy Design pattern for simple 
// Shopping Cart where three payment strategies are used 
// such as Credit Card, PayPal, BitCoin. Create an interface 
// for strategy pattern and give concrete implementation for payment. 

import Shopping.ShoppingInterface;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        ShoppingInterface shop = new ShoppingInterface();
        Scanner sc = new Scanner(System.in);
        char option;

        while (true) {
            System.out.println();
            System.out.println("Choose an option");
            System.out.println("a - Show Products Available");
            System.out.println("b - Add Item to Cart");
            System.out.println("c - Remove Item from Cart");
            System.out.println("d - Show Cart");
            System.out.println("e - Checkout and Pay");
            System.out.println("f - Empty Cart");
            System.out.println("g - Quit program");
            System.out.println();
            System.out.print("Your Option > ");
            option = sc.next().charAt(0);
            System.out.println();

            switch (option) {
                case 'a' -> shop.showItems();
                case 'b' -> shop.addItemToCart();
                case 'c' -> shop.removeItemFromCart();
                case 'd' -> shop.showShoppingCart();
                case 'e' -> shop.checkoutAndPay();
                case 'f' -> shop.emptyShoppingCart();
                case 'g' -> {
                    System.out.println("Exiting...");
                    System.exit(0);
                }
                default -> System.out.println("Incorrect Option. Try again...");
            }
        }
    }
}