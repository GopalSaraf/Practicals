// Title : Interface
// Problem Statement :
// Design and develop a context for given case study and implement an interface
// for Vehicles Consider the example of vehicles like bicycle, car, and bike.
// All Vehicles have common functionalities such as Gear Change, Speed up and
// apply breaks . Make an interface and put all these common functionalities.
// Bicycle, Bike, Car classes should be implemented for all these
// functionalities in their own class in their own way.

// Program by : 23168 Gopal Saraf

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char option;

        while (true) {
            System.out.println("Please choose an option from below :");
            System.out.println("a - Start a bike");
            System.out.println("b - Start a car");
            System.out.println("c - Exit program");
            System.out.println();
            System.out.print("Your Choice [a/b/c] > ");
            option = sc.next().charAt(0);
            System.out.println();

            switch (option) {
                case 'a' -> new HandleVehicle(new Bike()).handle();
                case 'b' -> new HandleVehicle(new Car()).handle();
                case 'c' -> {
                    System.out.println("Exiting Program...");
                    sc.close();
                    System.exit(0);
                }
                default -> {
                    System.out.println();
                    System.out.println("Incorrect Option. Try again...");
                    System.out.println();
                }
            }
        }
    }
}