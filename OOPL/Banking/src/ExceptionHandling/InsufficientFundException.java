package ExceptionHandling;

public class InsufficientFundException extends Exception {
    public InsufficientFundException() {
        super("Insufficient balance in account.");
    }

    public InsufficientFundException(String message) {
        super(message);
    }
}
