package ExceptionHandling;

public class WithdrawLimitException extends AccountException {
    public WithdrawLimitException() {
        super("Withdraw limit exceeded.");
    }

    public WithdrawLimitException(String message) {
        super(message);
    }

    @Override
    public String getShortMessage() {
        return "Withdraw limit";
    }
}
