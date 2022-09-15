import java.util.Scanner;

public class Publication {
    private String title; // Title of the publication
    private double price; // Price of the publication
    private int copies; // copies of the publication
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
        this.title = sc.nextLine();
        System.out.print("Enter price : ");
        this.price = sc.nextDouble();
        System.out.print("Enter number of copies : ");
        this.copies = sc.nextInt();
    }

    public void sellCopy(int qty) {
        System.out.println("Total Publication sell: $" + (qty * this.getPrice()));
    }

    public void sellCopy() {
        this.sellCopy(this.getCopies());
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
}
