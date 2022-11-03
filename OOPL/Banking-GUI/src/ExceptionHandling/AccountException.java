package ExceptionHandling;

public class AccountException extends BankException {
    public AccountException(Exception cause) {
        super(cause);
    }

    public AccountException(String message) {
        super(message);
    }

    public String getShortMessage() {
        return "Account Exception";
    }
}
