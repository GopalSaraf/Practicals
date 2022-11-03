package ExceptionHandling;

public class InvalidFieldException extends BankException {
    public InvalidFieldException() {
        super("Invalid fields chosen.");
    }

    public InvalidFieldException(String message) {
        super(message);
    }
}
