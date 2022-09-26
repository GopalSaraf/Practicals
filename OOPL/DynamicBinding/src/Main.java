// Title : Dynamic Binding
// Problem Statement :
// Design a base class shape with two double type values and member functions
// to input the data and compute_area() for calculating area of shape. Derive two classes’
// triangle and rectangle. Make compute_area() as abstract function and redefine this
// function in the derived class to suit their requirements. Write a program that accepts
// dimensions of triangle/rectangle and display calculated area. Implement dynamic
// binding for given case study.
//
// Program by : 23168 Gopal Saraf

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char option;

        while (true) {
            System.out.println();
            System.out.println("Choose an option");              // Menu
            System.out.println("a - Compute area of triangle");
            System.out.println("b - Compute area of rectangle");
            System.out.println("c - Quit program");
            System.out.println();
            System.out.print("Your Option > ");
            option = sc.next().charAt(0);
            System.out.println();

            switch (option) {
                case 'a' -> {
                    Shape triangle = new Triangle();        // Triangle object
                    triangle.takeDimensions();              // Taking dimensions
                    System.out.println();
                    triangle.computeArea();                 // Computing area
                }
                case 'b' -> {
                    Shape rectangle = new Rectangle();      // Rectangle object
                    rectangle.takeDimensions();             // Taking dimensions
                    System.out.println();
                    rectangle.computeArea();                // Computing area
                }
                case 'c' -> {
                    System.out.println("Exiting...");
                    System.exit(0);
                }
                default -> System.out.println("Incorrect Option. Try again...");
            }
        }
    }
}
