package ExceptionHandling;

public class AccountException extends Exception {
    public AccountException(Exception cause) {
        super(cause);
    }

    public AccountException(String message) {
        super(message);
    }

    public String getShortMessage() {
        return "Exception";
    }
}
