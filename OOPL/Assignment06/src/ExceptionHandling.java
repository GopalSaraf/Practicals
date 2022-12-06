import java.util.Scanner;
import java.util.stream.IntStream;

public class ExceptionHandling {
    private final Scanner sc = new Scanner(System.in);

    public void HandleArrayIndexOutOfBoundException() {
        int len, index;
        System.out.print("Enter size of array you want to use > ");
        len = sc.nextInt();
        int[] myArr = IntStream.range(0, len).toArray();
        System.out.println("Array created of " + len + " elements\n");
        System.out.print("Enter index of element you want to access > ");
        index = sc.nextInt();
        try {
            int element = myArr[index];
            System.out.println("Element at index " + index + " is " + element);
        } catch (ArrayIndexOutOfBoundsException ignored) {
            System.out.println("ArrayIndexOutOfBoundsException : Index is out of bound.");
        }
    }

    public void HandleArithmeticException() {
        int num1, num2;
        String num1Str, num2Str;
        try {
            System.out.print("Enter first number > ");
            num1Str = sc.next();
            num1 = Integer.parseInt(num1Str);

            System.out.print("Enter second number > ");
            num2Str = sc.next();
            num2 = Integer.parseInt(num2Str);

            if (num2 == 0)
                throw new ArithmeticException();

            float div = (float) num1 / num2;

            System.out.println("\nDivision of two numbers is " + div);
        } catch (NumberFormatException ignored) {
            System.out.println("\nNumberFormatException : Entered number can't be parsed into integers.");
        } catch (ArithmeticException ignored) {
            System.out.println("\nArithmeticException : Dividing by zero.");
        }
    }
}
