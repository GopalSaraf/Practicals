package ExceptionHandling;

public class WithdrawLimitException extends Exception {
    public WithdrawLimitException() {
        super("Withdraw limit exceeded.");
    }

    public WithdrawLimitException(String message) {
        super(message);
    }
}
