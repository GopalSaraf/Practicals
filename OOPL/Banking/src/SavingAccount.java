public class SavingAccount extends Account {

    SavingAccount(String name, int age, String mobileNo, double balance) {
        super(name, age, mobileNo, balance);
    }

    SavingAccount() {
        this("", 18, "0000000000", 0);
    }

    @Override
    public void setData() {
        super.setData();
        while (getBalance() < getMinBalance()) {
            deposit();
        }
        System.out.println();
        System.out.print("Your saving account is created SUCCESSFULLY. ");
        System.out.println("Your account number is " + getAccountNo() + ".");
        System.out.println();
        Database.addAccount(this);
    }

    @Override
    public void getData() {
        super.getData();
        System.out.println("-------- Account Information --------");
        System.out.println();
        System.out.println("Account type   :  Saving Account");
        System.out.println("Account Number :  " + getAccountNo());
        System.out.println("Balance        :  " + Transaction.currency(getBalance()));
        System.out.println();
        System.out.println("------------------**------------------");
    }

    @Override
    public void deposit() {
        Transaction.deposit(this);
    }

    @Override
    public void withdraw() {
        Transaction.withdraw(this);
    }

    @Override
    public void transfer() {
        Transaction.transfer(this);
    }

    public int getMinBalance() {
        return 3_000;
    }

    public int getWithdrawLimit() {
        return 20_000;
    }
}