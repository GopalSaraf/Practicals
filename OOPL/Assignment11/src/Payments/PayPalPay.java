package Payments;

import java.util.Scanner;

import static Shopping.ShoppingInterface.currency;

public class PayPalPay implements Payable {
    private String email;
    private String password;
    private final Scanner sc = new Scanner(System.in);

    @Override
    public void pay(float amount) {
        takeInput();
        System.out.println("Paid " + currency(amount) + " by paypal.");
        System.out.println("Thank you.");
    }

    private void takeInput() {
        System.out.print("Enter email ID > ");
        email = sc.nextLine();
        System.out.print("Enter password > ");
        password = sc.nextLine();
        System.out.println();
    }
}
