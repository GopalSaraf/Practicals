import java.util.LinkedHashMap;
import java.util.Map;

public class Vehicle implements IVehicle {

    protected int currentSpeed;
    protected int currentGear;
    protected final Map<Integer, Integer> gearToSpeed = new LinkedHashMap<>();
    protected int totalNoOfGears;
    protected boolean isStarted;

    public void incrementGear() {
    }

    public void incrementSpeed(int speedIncrement) {
    }

    public void applyBrakes(int speedDecrement) {
    }

    public void showStatus() {
        System.out.println();
        System.out.println("Current " + this + " Speed : " + showSpeed(currentSpeed));
        System.out.println("Current " + this + " Gear  : " + currentGear);
        System.out.println();
    }

    public void stop() {
    }

    public boolean isRunning() {
        return isStarted;
    }

    @Override
    public String toString() {
        return "Vehicle";
    }

    protected String showSpeed(int speed) {
        String postfixToAdd = "KM / hr";
        return speed + " " + postfixToAdd;
    }

    protected boolean canIncrementGear() {
        if (currentGear == totalNoOfGears)
            return false;
        boolean isCurrentSpeedLessThanNextLimit = currentSpeed <= gearToSpeed.get(currentGear);
        boolean isCurrentSpeedMoreThanPrevLimit = currentSpeed > gearToSpeed.get(currentGear - 1);
        return isCurrentSpeedLessThanNextLimit && isCurrentSpeedMoreThanPrevLimit;
    }

    protected boolean canIncrementSpeed(int speedIncrement) {
        int newSpeed = currentSpeed + speedIncrement;
        return newSpeed <= gearToSpeed.get(currentGear);
    }

    protected boolean canStop() {
        return currentGear <= 2;
    }

    protected int giveDecrementedSpeed(int speedDecrement) {
        return Math.max((currentSpeed - speedDecrement), 0);
    }

    protected int giveCorrectGear(int speed) {
        for (Map.Entry<Integer, Integer> entry : gearToSpeed.entrySet()) {
            if (speed <= entry.getValue())
                return entry.getKey();
        }
        return 0;
    }
}
