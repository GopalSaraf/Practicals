package Payments;

import static Shopping.ShoppingInterface.currency;

public class PayPalPay implements Payable{
    @Override
    public void pay(float amount) {
        System.out.println("Paid " + currency(amount) + " by paypal.");

    }
}
