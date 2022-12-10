import java.text.NumberFormat;
import java.util.Locale;
import java.util.Scanner;

public class Publication {

    protected String title; // Title of the publication

    protected double price; // Price of the publication

    protected int copies; // copies of the publication

    public Scanner sc = new Scanner(System.in);

    Publication(String title, double price, int copies) {
        this.title = title;
        this.price = price;
        this.copies = copies;
    }

    Publication() {
        this("", 0, 0);
    }

    public void getData() {
        System.out.print("Enter title : ");
        setTitle(sc.nextLine());
        System.out.print("Enter price : ");
        setPrice(sc.nextDouble());
        System.out.print("Enter number of copies : ");
        setCopies(sc.nextInt());
    }

    public static void getTotalSell() {
        System.out.println("Total Publication sell: " + currency(Book.totalBookSell + Magazine.totalMagazineSell));
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public void setPrice(double price) {
        if (price > 0) {
            this.price = price;
        } else {
            System.out.println("Invalid price");
        }
    }

    public void setCopies(int copies) {
        this.copies = copies;
    }

    public String getTitle() {
        return this.title;
    }

    public double getPrice() {
        return this.price;
    }

    public int getCopies() {
        return this.copies;
    }

    public static String currency(Double money) { // To get proper currency format
        Locale india = new Locale("hi", "IN");
        NumberFormat rupeesFormat = NumberFormat.getCurrencyInstance(india);
        return rupeesFormat.format(money);
    }
}
