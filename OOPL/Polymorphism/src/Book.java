public class Book extends Publication {

    private String author; // Author of the book

    Book(String title, double price, int copies, String author) {
        super(title, price, copies);
        this.author = author;
    }

    Book() {
        this("", 0, 0, "");
    }

    @Override
    public void getData() {
        super.getData();
        sc.nextLine();
        System.out.print("Enter author : ");
        this.author = sc.nextLine();
    }

    public void sellCopy(int qty) {
        System.out.println("Total Book sell: $" + (qty * getPrice()));
    }

    public void sellCopy() {
        this.sellCopy(getCopies());
    }

    public void orderCopies(int copies) {
        setCopies(getCopies() + copies);
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public String getAuthor() {
        return this.author;
    }
}
