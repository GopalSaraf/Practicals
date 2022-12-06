package ExceptionHandling;

public class BankException extends Exception {
    public BankException(Exception cause) {
        super(cause);
    }

    public BankException(String message) {
        super(message);
    }

    public String getShortMessage() {
        return "Bank Exception";
    }
}
