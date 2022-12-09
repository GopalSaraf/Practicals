import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Vector vector1 = new Vector();
        Vector vector2 = new Vector();
        char option;

        while (true) {
            System.out.println();
            System.out.println("Vector operations : ");
            System.out.println("a - Modulus of a vector");
            System.out.println("b - Addition between two vectors");
            System.out.println("c - Subtraction between two vectors");
            System.out.println("d - Scalar Multiplication with real value");
            System.out.println("e - Dot Product between two vectors");
            System.out.println("f - Cross Product between two vectors");
            System.out.println("g - Angle between two vectors");
            System.out.println("h - Exit");
            System.out.println();
            System.out.print("Enter your choice : ");
            option = sc.next().charAt(0);
            System.out.println();

            switch (option) {
                case 'a' -> {
                    System.out.println("Enter vector co-ordinates");
                    vector1.takeInput();
                    System.out.println();
                    System.out.println("Modulus value of given vector " + vector1 + " : " + vector1.getModulus());
                }
                case 'b' -> {
                    inputHandle(vector1, vector2);
                    System.out.println("Addition of vectors :  " + vector1.add(vector2));
                }
                case 'c' -> {
                    inputHandle(vector1, vector2);
                    System.out.println("Subtraction of vectors :  " + vector1.subtract(vector2));
                }
                case 'd' -> {
                    System.out.println("Enter vector co-ordinates");
                    vector1.takeInput();
                    System.out.print("Enter value to multiply with > ");
                    double value = sc.nextDouble();
                    System.out.println();
                    System.out.println("Scalar multiplication of " + vector1 + " with " + value + " : "
                            + vector1.scalarProduct(value));
                }
                case 'e' -> {
                    inputHandle(vector1, vector2);
                    System.out.println("Dot product of vectors :  " + vector1.dotProduct(vector2));
                }
                case 'f' -> {
                    inputHandle(vector1, vector2);
                    System.out.println("Cross product of vectors :  " + vector1.crossProduct(vector2));
                }
                case 'g' -> {
                    inputHandle(vector1, vector2);
                    System.out.println("Angle between vectors (in radians) :  " + vector1.angleBetween(vector2));
                }
                case 'h' -> {
                    System.out.println("Exiting...");
                    System.exit(0);
                }
                default -> System.out.println("Incorrect Option. Try again...");
            }
        }
    }

    private static void inputHandle(Vector vector1, Vector vector2) {
        System.out.println("Enter vector 1 co-ordinates");
        vector1.takeInput();
        System.out.println();
        System.out.println("Enter vector 2 co-ordinates");
        vector2.takeInput();
        System.out.println();
        System.out.println("First vector   :  " + vector1);
        System.out.println("Second vector  :  " + vector2);
        System.out.println();
    }
}