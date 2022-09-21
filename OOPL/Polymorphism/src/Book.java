public class Book extends Publication {

    private String author; // Author of the book

    protected static double totalBookSell = 0; // Book sell

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
        setAuthor(sc.nextLine());
    }

    public void sellCopy() {
        System.out.println("Ordered book " + getTitle());
        double amount = getCopies() * getPrice();
        System.out.println("Book sell: " + currency(amount));
        totalBookSell += amount;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public static void getTotalSell() {
        System.out.println("Total book sell is " + currency(totalBookSell));
    }
}
