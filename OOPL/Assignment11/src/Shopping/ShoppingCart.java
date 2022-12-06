package Shopping;

import Payments.Payable;

import java.util.*;

import static Shopping.ShoppingInterface.currency;

public class ShoppingCart {
    private final Map<Item, Integer> itemsAndQuantities;

    public ShoppingCart() {
        itemsAndQuantities = new LinkedHashMap<>();
    }

    public void addItem(Item item, int quantities) {
        itemsAndQuantities.put(item, quantities);
    }

    public void addQuantities(Item item, int quantities) {
        itemsAndQuantities.put(item, itemsAndQuantities.get(item) + quantities);
    }

    public void removeItem(Item item) {
        itemsAndQuantities.remove(item);
    }

    public void removeQuantities(Item item, int quantities) {
        itemsAndQuantities.put(item, itemsAndQuantities.get(item) - quantities);
    }

    public int itemCountInCart(Item item) {
        return itemsAndQuantities.getOrDefault(item, 0);
    }

    public Item getItemByIndex(int index) {
        return (Item) itemsAndQuantities.keySet().toArray()[index];
    }

    public void showCart() {
        System.out.println("Your shopping cart : ");
        System.out.println();

        List<String> header = List.of("Product No.", "Product Name", "Price", "Quantities", "Total Price");

        List<List<String>> rows = new ArrayList<>();
        int prodNo = 1;

        for (Map.Entry<Item, Integer> itemAndQuantity : itemsAndQuantities.entrySet()) {
            Item item = itemAndQuantity.getKey();
            int quantity = itemAndQuantity.getValue();
            rows.add(List.of(String.valueOf(prodNo++), item.getProductName(), currency(item.getProductPrice()),
                    String.valueOf(quantity), currency(item.getProductPrice() * quantity)));
        }
        rows.add(List.of("", "", "","", ""));
        rows.add(List.of("", "", "", "","Total : " + currency(calculateTotal())));
        TableFormat.show(header, rows);
    }

    public void emptyCart() {
        itemsAndQuantities.clear();
    }

    private float calculateTotal() {
        float total = 0;
        for (Map.Entry<Item, Integer> itemAndQuantity : itemsAndQuantities.entrySet()) {
            Item item = itemAndQuantity.getKey();
            int quantity = itemAndQuantity.getValue();
            total += (item.getProductPrice() * quantity);
        }
        return total;
    }

    public void pay(Payable payableMethod) {
        payableMethod.pay(calculateTotal());
        emptyCart();
    }
}
