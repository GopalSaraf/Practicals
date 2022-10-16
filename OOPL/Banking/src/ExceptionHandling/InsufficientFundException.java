package ExceptionHandling;

public class InsufficientFundException extends AccountException {
    public InsufficientFundException() {
        super("Insufficient balance in account.");
    }

    public InsufficientFundException(String message) {
        super(message);
    }

    @Override
    public String getShortMessage() {
        return "Insufficient balance";
    }
}
