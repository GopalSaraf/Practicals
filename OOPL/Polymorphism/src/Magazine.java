public class Magazine extends Publication {

    private int orderQty;

    private String currIssue;

    protected static double totalMagazineSell = 0; // Magazine sell

    Magazine(String title, double price, int copies, int orderQty, String currIssue) {
        super(title, price, copies);
        this.orderQty = orderQty;
        this.currIssue = currIssue;
    }

    Magazine() {
        this("", 0, 0, 0, "");
    }

    @Override
    public void getData() {
        super.getData();
        System.out.print("Enter order quantity : ");
        setOrderQty(sc.nextInt());
        sc.nextLine();
        System.out.print("Enter current Issue : ");
        setCurrIssue(sc.nextLine());
    }

    public void sellCopy() {
        System.out.println("Ordered magazine " + getTitle());
        double amount = getCopies() * getPrice();
        System.out.println("Magazine sell: " + currency(amount));
        totalMagazineSell += amount;
    }

    public void setCurrIssue(String issue) {
        this.currIssue = issue;
    }

    public void setOrderQty(int copies) {
        this.orderQty = copies;
    }

    public static void getTotalSell() {
        System.out.println("Total book sell is " + currency(totalMagazineSell));
    }

}
