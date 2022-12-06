package Payments;

import static Shopping.ShoppingInterface.currency;

public class BitCoinPay implements Payable{
    @Override
    public void pay(float amount) {
        System.out.println("Paid " + currency(amount) + " by bitcoin.");

    }
}
