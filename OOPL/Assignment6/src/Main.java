// Title : Exception Handling
// Problem Statement :
// Implement a program to handle Arithmetic exception, Array Index Out of
// Bounds. The user enters two numbers Num1 and Num2. The division of Num1 and
// Num2 is displayed. If Num1 and Num2 are not integers, the program would throw
// a Number Format Exception. If Num2 were zero, the program would throw an
// Arithmetic Exception. Display the exception.

// Program by : 23168 Gopal Saraf

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        ExceptionHandling exceptionHandling = new ExceptionHandling();
        char option;

        while (true) {
            System.out.println();
            System.out.println("Choose type of exception you want to handle : ");
            System.out.println("a - ArrayIndexOutOfBoundsException");
            System.out.println("b - ArithmeticException");
            System.out.println("c - Exit Program");
            System.out.println();
            System.out.print("Your Choice > ");
            option = sc.next().charAt(0);
            System.out.println();

            switch (option) {
                case 'a' -> {
                    exceptionHandling.HandleArrayIndexOutOfBoundException();
                }
                case 'b' -> {
                    exceptionHandling.HandleArithmeticException();
                }
                case 'c' -> {
                    System.out.println("Exiting Program...");
                    System.exit(0);
                }
                default -> {
                    System.out.println("Incorrect Option. Try again...");
                }
            }
        }

    }
}