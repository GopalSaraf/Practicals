import java.util.Scanner;

// Complex Number Class
public class ComplexNumber {
    public Double realValue; // Real value of the complex number
    public Double imgValue; // Imaginary value of the complex number
    private final Scanner sc = new Scanner(System.in);

    public ComplexNumber(double realValue, double imgValue) {
        this.realValue = realValue;
        this.imgValue = imgValue;
    }

    public ComplexNumber() { // Default constructor
        this(0, 0);
    }

    public void takeInput(String toAdd) {
        // To take real and imaginary values input from user
        System.out.println();
        realValue = takeDouble(("Enter real value of " + toAdd + " complex number > "),
                ("Enter valid real value of " + toAdd + " complex number > "));
        imgValue = takeDouble(("Enter imaginary value of " + toAdd + " complex number > "),
                ("Enter valid imaginary value of " + toAdd + " complex number > "));
    }

    public ComplexNumber add(ComplexNumber other) {
        var added = new ComplexNumber(); // Complex object to save added values
        added.realValue = realValue + other.realValue;
        added.imgValue = imgValue + other.imgValue;
        return added;
    }

    public ComplexNumber subtract(ComplexNumber other) {
        var subtracted = new ComplexNumber(); // Complex object to save subtracted values
        subtracted.realValue = realValue - other.realValue;
        subtracted.imgValue = imgValue - other.imgValue;
        return subtracted;
    }

    public ComplexNumber multiply(ComplexNumber other) {
        var multiplied = new ComplexNumber(); // Complex object to save multiplied values
        multiplied.realValue = realValue * other.realValue - imgValue * other.imgValue;
        multiplied.imgValue = realValue * other.imgValue + imgValue * other.realValue;
        return multiplied;
    }

    public ComplexNumber divide(ComplexNumber other) {
        var divided = new ComplexNumber(); // Complex object to save divided values
        double modOfOther = other.realValue * other.realValue + other.imgValue * other.imgValue;
        divided.realValue = (realValue * other.realValue + imgValue * other.imgValue) / modOfOther;
        divided.imgValue = (imgValue * other.realValue - realValue * other.imgValue) / modOfOther;
        return divided;
    }

    @Override
    public String toString() { // To print a complex number
        var string = "";
        if (imgValue == 0) { // Will only print real value
            string = realValue % 1 == 0 ? String.valueOf(realValue.intValue()) : String.format("%.2f", realValue);
        } else if (realValue == 0) { // Will print only imaginary value
            string += (imgValue >= 0 ? " i " : " - i ");
            string += imgValue % 1 == 0 ? (imgValue >= 0 ? imgValue.intValue() : imgValue.intValue() * -1)
                    : String.format("%.2f", (imgValue >= 0 ? imgValue : imgValue * -1));
        } else
        // For checking if real or imaginary value is integer or double
        if (realValue % 1 == 0 && imgValue % 1 == 0) {
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

    private double takeDouble(String msg, String invalidMsg) { // To take valid double
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
