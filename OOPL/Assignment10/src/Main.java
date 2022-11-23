// Title : Factory Design Pattern
// Problem Statement :
// Design and implement Factory design pattern for the given context. Consider Car building
// process, which requires many steps from allocating accessories to final makeup. These steps
// should be written as methods and should be called while creating an instance of a specific car
// type. Hatchback, Sedan, SUV could be the subclasses of Car class. Car class and its subclasses,
// CarFactory should be implemented.

// Program by : 23168 Gopal Saraf

import Cars.Car;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        String modelStr;
        Car.Model model;
        Car car;

        while (true) {
            System.out.println();
            System.out.print("Enter car you want to build : ");
            System.out.print("[ Small / Sedan / Luxury ] (Quit to exit) > ");
            modelStr = sc.next();
            System.out.println();
            modelStr = modelStr.toUpperCase();

            if (modelStr.equals("QUIT")) {
                System.out.println("Exiting Program...");
                System.exit(0);
            }
            else {
                try {
                    model = Car.Model.valueOf(modelStr);
                    car = CarFactory.buildCar(model);
                    car.build();
                } catch (Exception e) {
                    System.out.println("Incorrect car entered. Try again..");
                }
            }
        }

    }
}