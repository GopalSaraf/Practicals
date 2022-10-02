package ExceptionHandling;

public class NegativeAmountException extends Exception {
    public NegativeAmountException() {
        super("Negative amount entered.");
    }

    public NegativeAmountException(String message) {
        super(message);
    }
}
