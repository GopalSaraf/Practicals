package Shopping;

import Payments.BitCoinPay;
import Payments.CreditCardPay;
import Payments.Payable;
import Payments.PayPalPay;

import java.text.NumberFormat;
import java.util.*;

public class ShoppingInterface {
    private final List<Item> items;
    private final ShoppingCart shoppingCart;
    private final Scanner sc = new Scanner(System.in);

    public ShoppingInterface() {
        shoppingCart = new ShoppingCart();
        items = new ArrayList<>();
        items.add(new Item("prod1", "MacBook Air with M1 chip", 99990));
        items.add(new Item("prod2", "MacBook Air with M2 chip", 119900));
        items.add(new Item("prod3", "MacBook Pro 13\"", 129900));
        items.add(new Item("prod4", "MacBook Pro 16\"", 194900));
        items.add(new Item("prod5", "iMac 24\"", 119900));
        items.add(new Item("prod6", "Studio Display", 159900));
        items.add(new Item("prod7", "iPhone 14 Pro", 129900));
        items.add(new Item("prod8", "iPhone 14", 79900));
        items.add(new Item("prod9", "iPhone 13", 64900));
        items.add(new Item("prod10", "iPod Pro", 81900));
        items.add(new Item("prod11", "iPad Air", 59900));
        items.add(new Item("prod12", "AirPods Max", 59900));
        items.add(new Item("prod13", "AirPods 3rd Gen", 19900));
        items.add(new Item("prod14", "AirPods 2nd Gen", 14900));
        items.add(new Item("prod15", "Apple Watch", 89900));
    }

    public void showItems() {
        System.out.println("Products available currently in shop : ");
        System.out.println();

        List<String> header = List.of("Product No", "Product Name", "Product Price");
        List<List<String>> rows = new ArrayList<>();

        int itemNo = 1;
        for (Item item : items)
            rows.add(List.of(String.valueOf(itemNo++), item.getProductName(), currency(item.getProductPrice())));

        TableFormat.show(header, rows);
    }

    public void addItemToCart() {
        int prodNo;
        int quantity;
        showItems();
        try {
            System.out.print("Enter Product No you want to add to cart > ");
            prodNo = sc.nextInt();
            Item item = items.get(prodNo - 1);
            boolean isItemInCart = shoppingCart.itemCountInCart(item) != 0;
            if (isItemInCart) {
                System.out.println(item.getProductName() + " is present in cart.");
                System.out.println("Current quantities of " + item.getProductName() + " : " +
                        shoppingCart.itemCountInCart(item));
                System.out.print("How many extra quantities you want to add > ");
                quantity = sc.nextInt();
                if (quantity < 0) throw new InputMismatchException();
                shoppingCart.addQuantities(item, quantity);
                System.out.println("Quantities Updated.");
            } else {
                System.out.print("How many quantities you want to add > ");
                quantity = sc.nextInt();
                if (quantity < 0) throw new InputMismatchException();
                shoppingCart.addItem(item, quantity);
                System.out.println("Product added in cart.");
            }
        } catch (NumberFormatException e) {
            System.out.println("Incorrect input. Try again..");
        } catch (IndexOutOfBoundsException e) {
            System.out.println("No product exist with given Product No. Try again..");
        } catch (InputMismatchException e) {
            System.out.println("Quantities can not ne negative. Try again..");
        } catch (Exception e) {
            System.out.println("Exception occurred. Try again..");
        }
    }

    public void removeItemFromCart() {
        int prodNo;
        int quantity;
        showShoppingCart();
        try {
            System.out.print("Enter Product No you want to remove from cart > ");
            prodNo = sc.nextInt();
            Item item = shoppingCart.getItemByIndex(prodNo - 1);
            System.out.println("Current quantities of " + item.getProductName() + " : " +
                    shoppingCart.itemCountInCart(item));
            System.out.print("How many extra quantities you want to remove > ");
            quantity = sc.nextInt();
            if (quantity < 0) throw new InputMismatchException();
            if (quantity == shoppingCart.itemCountInCart(item)) {
                shoppingCart.removeItem(item);
                System.out.println("Product removed from cart.");
            } else {
                shoppingCart.removeQuantities(item, quantity);
                System.out.println("Quantities Updated.");
            }
        } catch (NumberFormatException e) {
            System.out.println("Incorrect input. Try again..");
        } catch (IndexOutOfBoundsException e) {
            System.out.println("No product exist with given Product No. Try again..");
        } catch (InputMismatchException e) {
            System.out.println("Quantities can not ne negative. Try again..");
        } catch (Exception e) {
            System.out.println("Exception occurred. Try again..");
        }
    }

    public void checkoutAndPay() {
        char option;
        Payable paymentMethod;
        System.out.println("How do you want to pay ?");
        System.out.println("a - Credit/Debit Card");
        System.out.println("b - PayPal");
        System.out.println("c - BitCoin");
        System.out.println("d - Exit checkout");
        System.out.println();
        System.out.print("Your Option > ");
        option = sc.next().charAt(0);
        System.out.println();

        switch (option) {
            case 'a' -> paymentMethod = new CreditCardPay();
            case 'b' -> paymentMethod = new PayPalPay();
            case 'c' -> paymentMethod = new BitCoinPay();
            default -> paymentMethod = null;
        }
        if (paymentMethod != null) shoppingCart.pay(paymentMethod);
        else System.out.println("Try again later.");
    }

    public void showShoppingCart() {
        shoppingCart.showCart();
    }

    public void emptyShoppingCart() {
        shoppingCart.emptyCart();
        System.out.println("Removed all products from cart.");
    }

    public static String currency(float money) {
        Locale india = new Locale("hi", "IN");
        NumberFormat rupeesFormat = NumberFormat.getCurrencyInstance(india);
        return rupeesFormat.format(money);
    }
}
