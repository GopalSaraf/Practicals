package ExceptionHandling;

public class AccountNotFoundException extends BankException {
    public AccountNotFoundException() {
        super("No Account Found");
    }

    public AccountNotFoundException(String message) {
        super(message);
    }
}
