// Problem Statement :
// Design a class ‘Complex’ with data members for real and imaginary part.
// Provide default and parameterized constructors. Write a program to perform
// arithmetic operations of two complex numbers.

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        var complexNumber1 = new ComplexNumber(); // First complex number
        var complexNumber2 = new ComplexNumber(); // Second complex number
        var sc = new Scanner(System.in);

        System.out.println("Welcome to Complex Calculator Program!");

        while (true) {
            System.out.println("\nCOMPLEX OPERATIONS : "); // Menu for user
            System.out.println("a - Addition");
            System.out.println("b - Subtraction");
            System.out.println("c - Multiplication");
            System.out.println("d - Division");
            System.out.println("e - Exit program\n");
            System.out.print("Enter your choice : ");
            char option = sc.next().charAt(0);

            if (option == 'a' || option == 'b' || option == 'c' || option == 'd') {
                // Will take input only if option is either 'a' or 'b' or 'c' or ‘d'
                complexNumber1.takeInput("first");
                complexNumber2.takeInput("second");
                System.out.println();
                System.out.println("First complex number is : " + complexNumber1);
                System.out.println("Second complex number is : " + complexNumber2);
                System.out.println();
            }

            switch (option) {
                case 'a' -> { // Addition
                    var addedComplexNumber = complexNumber1.add(complexNumber2);
                    System.out.println("Addition of two numbers is : " + addedComplexNumber);
                }
                case 'b' -> { // Subtraction
                    var subtractedComplexNumber = complexNumber1.subtract(complexNumber2);
                    System.out.println("Subtraction of two numbers is : " + subtractedComplexNumber);
                }
                case 'c' -> { // Multiplication
                    var multipliedComplexNumber = complexNumber1.multiply(complexNumber2);
                    System.out.println("Multiplication of two numbers is : " + multipliedComplexNumber);
                }
                case 'd' -> { // Division
                    var dividedComplexNumber = complexNumber1.divide(complexNumber2);
                    System.out.println("Division of two numbers is : " + dividedComplexNumber);
                }
                case 'e' -> { // Exit program
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
