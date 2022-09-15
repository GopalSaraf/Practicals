public class Main {
    public static void main(String[] args) {
        Book book = new Book();
        book.getData();
        book.orderCopies(5);
        book.sellCopy();
//        Publication bookPub = new Book();
//        bookPub.sellCopy(5); //Overriden method is invoke
//        Publication publication = new Publication();
//        publication.sellCopy(5);
    }
}