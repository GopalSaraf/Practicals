import java.text.NumberFormat;
import java.util.*;

public class Account extends Customer {
    private static final Map<Integer, Integer> passwords = new HashMap<Integer, Integer>();
    private static final Set<Integer> accountIDs = new HashSet<Integer>();
    private int accountNo;
    private int password;
    private double balance = 0;
    private final Scanner sc = new Scanner(System.in);

    @Override
    public void setData() {
        super.setData();
        generateID();
        generatePassword();
    }

    @Override
    public void getData() {
        super.getData();
    }

    public void depositAmount(double amount) {
        balance += amount;
    }

    public void withdrawAmount(double amount) {
        balance -= amount;
    }

    private void generateID() {
        int min = 1000;
        int max = 9999;
        accountNo = (int) (Math.random() * (max - min + 1) + min);
        while (!isValidID(accountNo)) {
            accountNo = (int) (Math.random() * (max - min + 1) + min);
        }
        addID(accountNo);
    }

    public void generatePassword() {
        System.out.print("Enter a password you want to use (between 1000 to 9999) > ");
        password = sc.nextInt();
        while (!isValidPassword(password)) {
            System.out.print("Enter valid password (between 1000 to 9999) > ");
            password = sc.nextInt();
        }
        addIDandPassword(accountNo, password);
    }

    private boolean isValidPassword(int password) {
        return password >= 1000 && password <= 9999;
    }

    private static boolean isValidID(int id) {
        return !accountIDs.contains(id);
    }

    private static void addID(int id) {
        accountIDs.add(id);
    }

    private static void addIDandPassword(int id, int password) {
        passwords.put(id, password);
    }

    public int getAccountNo() {
        return accountNo;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(int balance) {
        this.balance = balance;
    }

    protected String currency(double money) {
        Locale india = new Locale("hi", "IN");
        NumberFormat rupeesFormat = NumberFormat.getCurrencyInstance(india);
        return rupeesFormat.format(money);
    }
}
