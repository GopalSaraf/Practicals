package Payments;

import java.util.Scanner;

import static Shopping.ShoppingInterface.currency;

public class CreditCardPay implements Payable {
    private String cardNumber;
    private String cardHolderName;
    private String cardCVV;
    private String cardExpDate;
    private final Scanner sc = new Scanner(System.in);

    @Override
    public void pay(float amount) {
        takeInput();
        System.out.println("Paid " + currency(amount) + " by credit card.");
        System.out.println("Thank You, " + cardHolderName);
    }

    private void takeInput() {
        System.out.print("Enter card number > ");
        cardNumber = sc.nextLine();
        System.out.print("Enter card holder name > ");
        cardHolderName = sc.nextLine();
        System.out.print("Enter card CVV > ");
        cardCVV = sc.nextLine();
        System.out.print("Enter card expiry date > ");
        cardExpDate = sc.nextLine();
        System.out.println();
    }
}
