public class Magazine extends Publication {
    private int orderQty;
    private String currIssue;

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
        this.orderQty = sc.nextInt();
        System.out.print("Enter current Issue : ");
        this.currIssue = sc.nextLine();
    }

    public void sellCopy(int qty) {
        System.out.println("Total Magazine sell: $" + (qty * getPrice()));
    }

    public void sellCopy() {
        this.sellCopy(getCopies());
    }

    public void recNewIssue(String pNewIssue) {
        setCopies(orderQty);
        currIssue = pNewIssue;
    }

    public void setCurrIssue(String issue) {
        this.currIssue = issue;
    }

    public void setOrderQty(int copies) {
        this.orderQty = copies;
    }

    public String getCurrIssue() {
        return this.currIssue;
    }

    public int getOrderQty() {
        return this.orderQty;
    }
}