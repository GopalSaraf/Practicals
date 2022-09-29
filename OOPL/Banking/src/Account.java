import java.util.*;

public class Account extends Customer {
    private int accountNo;
    private int password;
    private double balance;
    private final Scanner sc = new Scanner(System.in);

    Account(String name, int age, String mobileNo, double balance) {
        super(name, age, mobileNo);
        this.balance = balance;
    }

    @Override
    public void setData() {
        super.setData();
        generateAccNo();
        generatePassword();
    }

    @Override
    public void getData() {
        super.getData();
    }

    public void depositAmount(double amount) {
        balance += amount;
        Database.updateBalance(getAccountNo(), getBalance());
    }

    public void withdrawAmount(double amount) {
        balance -= amount;
        Database.updateBalance(getAccountNo(), getBalance());
    }

    private void generateAccNo() {
        int min = 1000;
        int max = 9999;
        accountNo = (int) (Math.random() * (max - min + 1) + min);
        while (!Valid.isValidAccNo(accountNo)) {
            accountNo = (int) (Math.random() * (max - min + 1) + min);
        }
    }

    public void generatePassword() {
        System.out.print("Enter a password you want to use (between 1000 to 9999) > ");
        password = sc.nextInt();
        while (!Valid.isValidPassword(password)) {
            System.out.print("Enter valid password (between 1000 to 9999) > ");
            password = sc.nextInt();
        }
    }

    public void deposit() {
    }

    public void withdraw() {
    }

    public void transfer() {
    }

    public int getAccountNo() {
        return accountNo;
    }

    public double getBalance() {
        return balance;
    }

    public int getPassword() {
        return password;
    }

    public int getMinBalance() {
        return 0;
    }

    public int getWithdrawLimit() {
        return 0;
    }

    public void setAccountNo(int accountNo) {
        this.accountNo = accountNo;
    }

    public void setPassword(int password) {
        this.password = password;
    }

    public void updateInfo() {
        Database.updateAccount(getAccountNo(), getName(), getAge(), getMobileNo());
    }
}