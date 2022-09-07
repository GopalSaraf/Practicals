import java.util.Scanner;

public class ComplexNumber {
    public Double realValue;
    public Double imgValue;
    private final Scanner sc = new Scanner(System.in);

    public ComplexNumber(double realValue, double imgValue) {
        this.realValue = realValue;
        this.imgValue = imgValue;
    }
    public ComplexNumber() {
        this(0, 0);
    }

    public void takeInput(String toAdd) {
        System.out.println();
        realValue = takeDouble(("Enter real value of " + toAdd + " complex number > "),
                               ("Enter valid real value of " + toAdd + " complex number > "));
        imgValue = takeDouble(("Enter imaginary value of " + toAdd + " complex number > "),
                              ("Enter valid imaginary value of " + toAdd + " complex number > "));
    }
    public ComplexNumber add(ComplexNumber other) {
        ComplexNumber added = new ComplexNumber();
        added.realValue = realValue + other.realValue;
        added.imgValue = imgValue + other.imgValue;
        return added;
    }
    public ComplexNumber subtract(ComplexNumber other) {
        ComplexNumber subtracted = new ComplexNumber();
        subtracted.realValue = realValue - other.realValue;
        subtracted.imgValue = imgValue - other.imgValue;
        return subtracted;
    }
    public ComplexNumber multiply(ComplexNumber other) {
        ComplexNumber multiplied = new ComplexNumber();
        multiplied.realValue = realValue * other.realValue - imgValue * other.imgValue;
        multiplied.imgValue = realValue * other.imgValue + imgValue * other.realValue;
        return multiplied;
    }
    public ComplexNumber divide(ComplexNumber other) {
        ComplexNumber divided = new ComplexNumber();
        double modOfOther = other.realValue * other.realValue + other.imgValue * other.imgValue;
        divided.realValue = (realValue * other.realValue + imgValue * other.imgValue) / modOfOther;
        divided.imgValue = (imgValue * other.realValue - realValue * other.imgValue) / modOfOther;
        return divided;
    }

    @Override
    public String toString() {
        String string = "";
        if (imgValue == 0) {
            string = realValue % 1 == 0 ? String.valueOf(realValue.intValue()) : String.format("%.2f", realValue);
        } else if (realValue == 0) {
            string += (imgValue >= 0 ? " i " : " - i ");
            string += imgValue % 1 == 0 ?
                    (imgValue >= 0 ? imgValue.intValue() : imgValue.intValue() * -1) :
                    String.format("%.2f", (imgValue >= 0 ? imgValue : imgValue * -1));
        } else if (realValue % 1 == 0 && imgValue % 1 == 0) {
            string += String.valueOf(realValue.intValue());
            string += (imgValue >= 0 ? " + i " : " - i ");
            string += (imgValue >= 0 ? imgValue.intValue() : imgValue.intValue() * -1);
        } else if (realValue % 1 == 0) {
            string += String.valueOf(realValue.intValue());
            string += (imgValue >= 0 ? " + i " : " - i ");
            string += String.format("%.2f", (imgValue >= 0 ? imgValue : imgValue * -1));
        } else if (imgValue % 1 == 0) {
            string += String.format("%.2f", realValue);
            string += (imgValue >= 0 ? " + i " : " - i ");
            string += (imgValue >= 0 ? imgValue.intValue() : imgValue.intValue() * -1);
        } else {
            string += String.format("%.2f", realValue);
            string += (imgValue >= 0 ? " + i " : " - i ");
            string += String.format("%.2f", (imgValue >= 0 ? imgValue : imgValue * -1));
        }
        return string;
    }
    private double takeDouble(String msg, String invalidMsg) {
        System.out.print(msg);
        while (true) {
            if (sc.hasNextDouble()) {
                return sc.nextDouble();
            } else {
                System.out.print(invalidMsg);
                sc.next();
            }
        }
    }
}
