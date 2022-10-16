package ExceptionHandling;

public class InvalidValueException extends AccountException {
    public InvalidValueException() {
        super("Invalid amount entered.");
    }

    public InvalidValueException(String message) {
        super(message);
    }

    @Override
    public String getShortMessage() {
        return "Invalid amount";
    }
}
