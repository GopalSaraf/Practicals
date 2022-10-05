package ExceptionHandling;

public class InvalidValueException extends Exception{
    public InvalidValueException() {
        super("Invalid amount entered.");
    }

    public InvalidValueException(String message) {
        super(message);
    }
}
