public class Car extends Vehicle implements IVehicle {
    Car() {
        System.out.println("Car started.");
        System.out.println();
        isStarted = true;
        currentGear = 0;
        currentSpeed = 0;
        totalNoOfGears = 6;

        gearToSpeed.put(-1, -1);
        gearToSpeed.put(0, 0);
        gearToSpeed.put(1, 30);
        gearToSpeed.put(2, 60);
        gearToSpeed.put(3, 100);
        gearToSpeed.put(4, 150);
        gearToSpeed.put(5, 200);
        gearToSpeed.put(6, 250);
    }

    @Override
    public void incrementGear() {
        System.out.println();
        if (canIncrementGear()) {
            currentGear++;
            System.out.println("Incremented car gear.");
            showStatus();
        } else {
            int minIncrementInSpeed = gearToSpeed.get(currentGear - 1) - currentSpeed + 1;
            System.out.println("Can't increment gear.");
            if (currentGear == totalNoOfGears)
                System.out.println("Car is having max " + totalNoOfGears + " gears.");
            else
                System.out.println("You have to increase speed by at least " + showSpeed(minIncrementInSpeed)
                        + " to increment gear.");
            System.out.println();
        }
    }

    @Override
    public void incrementSpeed(int speedIncrement) {
        if (canIncrementSpeed(speedIncrement)) {
            currentSpeed += speedIncrement;
            System.out.println("Car speed incremented by " + showSpeed(speedIncrement));
            showStatus();
        } else {
            int maxIncrementInSpeed = gearToSpeed.get(currentGear) - currentSpeed;
            System.out.println("Can't increment speed of car.");
            System.out.println("You are in " + currentGear + " gear whose max speed is "
                    + showSpeed(gearToSpeed.get(currentGear)) + ".");
            System.out.println(
                    "You can increment upto " + showSpeed(maxIncrementInSpeed) + " in " + currentGear + " gear.");
            System.out.println();
        }
    }

    @Override
    public void applyBrakes(int speedDecrement) {
        int prevSpeed = currentSpeed;
        currentSpeed = giveDecrementedSpeed(speedDecrement);
        currentGear = giveCorrectGear(currentSpeed);
        System.out.println("Speed decremented by " + showSpeed(prevSpeed - currentSpeed));
        showStatus();
    }

    public void stop() {
        System.out.println();
        if (canStop()) {
            isStarted = false;
            System.out.println("Car stopped.");
        } else {
            System.out.println("Car is in high gears. Decrease speed and then stop the car.");
        }
        System.out.println();
    }

    @Override
    public String toString() {
        return "Car";
    }
}
