import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        ComplexNumber complexNumber1 = new ComplexNumber();
        ComplexNumber complexNumber2 = new ComplexNumber();
        Scanner sc = new Scanner(System.in);

        System.out.println("Welcome to Complex Calculator Program!");

        while (true) {
            System.out.println("\nCOMPLEX OPERATIONS : ");
            System.out.println("a - Addition");
            System.out.println("b - Subtraction");
            System.out.println("c - Multiplication");
            System.out.println("d - Division");
            System.out.println("e - Exit program\n");
            System.out.print("Enter your choice : ");
            char option = sc.next().charAt(0);

            if (option == 'a' || option == 'b' || option == 'c' || option == 'd') {
                complexNumber1.takeInput("first");
                complexNumber2.takeInput("second");
                System.out.println();
                System.out.println("First complex number is : " + complexNumber1);
                System.out.println("Second complex number is : " + complexNumber2);
                System.out.println();
            }

            switch (option) {
                case 'a' -> {
                    ComplexNumber addedComplexNumber = complexNumber1.add(complexNumber2);
                    System.out.println("Addition of two numbers is : " + addedComplexNumber);
                }
                case 'b' -> {
                    ComplexNumber subtractedComplexNumber = complexNumber1.subtract(complexNumber2);
                    System.out.println("Subtraction of two numbers is : " + subtractedComplexNumber);
                }
                case 'c' -> {
                    ComplexNumber multipliedComplexNumber = complexNumber1.multiply(complexNumber2);
                    System.out.println("Multiplication of two numbers is : " + multipliedComplexNumber);
                }
                case 'd' -> {
                    ComplexNumber dividedComplexNumber = complexNumber1.divide(complexNumber2);
                    System.out.println("Division of two numbers is : " + dividedComplexNumber);
                }
                case 'e' -> {
                    System.out.println("Exiting program...");
                    sc.close();
                    System.exit(0);
                }
                default -> System.out.println("Sorry, Incorrect option!");
            }
            System.out.println();
        }
    }
}


