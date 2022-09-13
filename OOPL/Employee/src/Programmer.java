import java.text.NumberFormat;
import java.util.Locale;
import java.util.Scanner;

public class Programmer extends Employee {
    private Double basicPay;
    private final Scanner sc = new Scanner(System.in);

    public Programmer(String name, String mobileNo, String mailID, String address, double basicPay) {
        super(name, mobileNo, address, mailID);
        this.basicPay = basicPay;
    }

    public Programmer() {
        this("", "", "", "", 0);
    }

    @Override
    public void getData() {
        super.getData();
        setBasicPay();
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Employee type :  Programmer");
        System.out.println();
        System.out.println("-------------- Pay Slip --------------");
        System.out.println();
        System.out.println("Basic Pay     :  " + currency(getBasicPay()));
        System.out.println("DA Amount     :  " + currency(getDAAmt()));
        System.out.println("PF Amount     :  " + currency(getPFAmt()));
        System.out.println("HRA Amount    :  " + currency(getHRAAmt()));
        System.out.println("Club Amount   :  " + currency(getClubAmt()));
        System.out.println("Gross Salary  :  " + currency(getGrossSalaryAmt()));
        System.out.println("Net Salary    :  " + currency(getNetSalaryAmt()));
        System.out.println();
        System.out.println("------------------**------------------");
        System.out.println();
    }

    private void setBasicPay() { // To set and validate basic pay amount
        System.out.print("Enter Basic Pay of " + getName() + " > ");
        while (true) {
            if (sc.hasNextDouble()) {
                basicPay = sc.nextDouble();
                break;
            } else {
                System.out.print("Enter valid Basic Pay of " + getName() + " > ");
                sc.next();
            }
        }
    }

    private Double getBasicPay() {
        return basicPay;
    }

    private Double getDAAmt() {
        double DA = 0.97;
        return DA * getBasicPay();
    }

    private Double getHRAAmt() {
        double HRA = 0.10;
        return HRA * getBasicPay();
    }

    private Double getPFAmt() {
        double PF = 0.12;
        return PF * getBasicPay();
    }

    private Double getClubAmt() {
        double club = 0.001;
        return club * getBasicPay();
    }

    private Double getNetSalaryAmt() {
        return getGrossSalaryAmt() - getClubAmt() - getPFAmt();
    }

    private Double getGrossSalaryAmt() {
        return getBasicPay() + getDAAmt() + getHRAAmt();
    }

    private String currency(Double money) { // To get proper currency format
        Locale india = new Locale("hi", "IN");
        NumberFormat rupeesFormat = NumberFormat.getCurrencyInstance(india);
        return rupeesFormat.format(money);
    }
}
