package ExceptionHandling;

public class NegativeAmountException extends AccountException {
    public NegativeAmountException() {
        super("Negative amount entered.");
    }

    public NegativeAmountException(String message) {
        super(message);
    }

    @Override
    public String getShortMessage() {
        return "Negative amount";
    }
}
