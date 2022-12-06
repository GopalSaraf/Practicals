import java.util.Scanner;

public class HandleVehicle {
    private final Vehicle vehicle;
    private boolean isCurrentlyRunning;
    private final Scanner sc = new Scanner(System.in);

    HandleVehicle(Vehicle vehicle) {
        this.vehicle = vehicle;
        isCurrentlyRunning = true;
    }

    public void handle() {
        char option;
        while (isCurrentlyRunning) {
            System.out.println("Please an operation :");
            System.out.println("a - Increment a gear of " + vehicle);
            System.out.println("b - Increase speed of " + vehicle);
            System.out.println("c - Apply brakes of " + vehicle);
            System.out.println("d - Stop the " + vehicle);
            System.out.println("e - Show status of " + vehicle);
            System.out.println();
            System.out.print("Your Choice [a/b/c/d] > ");
            option = sc.next().charAt(0);

            switch (option) {
                case 'a' -> incrementGear();
                case 'b' -> incrementSpeed();
                case 'c' -> applyBrakes();
                case 'd' -> stop();
                case 'e' -> vehicle.showStatus();
                default -> {
                    System.out.println();
                    System.out.println("Incorrect Option. Try again...");
                    System.out.println();
                }
            }
        }
    }

    public void incrementGear() {
        vehicle.incrementGear();
    }

    public void incrementSpeed(int speedIncrement) {
        vehicle.incrementSpeed(speedIncrement);
    }

    public void incrementSpeed() {
        int speedToIncrement;
        System.out.println();
        System.out.print("Enter speed by which you want to increment > ");
        speedToIncrement = sc.nextInt();
        System.out.println();
        incrementSpeed(speedToIncrement);
    }

    public void applyBrakes(int speedDecrement) {
        vehicle.applyBrakes(speedDecrement);
    }

    public void applyBrakes() {
        int speedToDecrement;
        System.out.println();
        System.out.print("Enter speed by which you want to decrement > ");
        speedToDecrement = sc.nextInt();
        System.out.println();
        applyBrakes(speedToDecrement);
    }

    public void stop() {
        vehicle.stop();
        isCurrentlyRunning = vehicle.isRunning();
    }
}
