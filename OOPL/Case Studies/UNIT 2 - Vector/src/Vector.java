import java.util.Scanner;

import static java.lang.Math.acos;
import static java.lang.Math.sqrt;

class Vector {
    private double x;
    private double y;
    private double z;
    private final Scanner sc = new Scanner(System.in);

    public Vector(double x, double y, double z) {
        this.x = x;
        this.y = y;
        this.z = z;
    }

    public Vector() {
        this(0, 0, 0);
    }

    public void takeInput() {
        x = takeDouble(("Enter x > "), ("Enter valid x > "));
        y = takeDouble(("Enter y > "), ("Enter valid y > "));
        z = takeDouble(("Enter z > "), ("Enter valid z > "));
    }

    public double getModulus() {
        return sqrt(x * x + y * y + z * z);
    }

    public Vector add(Vector other) {
        return new Vector(x + other.x, y + other.y, z + other.z);
    }

    public Vector subtract(Vector other) {
        return new Vector(x - other.x, y - other.y, z - other.z);
    }

    public Vector scalarProduct(double value) {
        return new Vector(value * x, value * y, value * z);
    }

    public double dotProduct(Vector other) {
        return x * other.x + y * other.y + z * other.z;
    }

    public Vector crossProduct(Vector other) {
        double newX = x * other.z - z * other.y;
        double newY = z * other.x - x * other.z;
        double newZ = x * other.y - y * other.x;
        return new Vector(newX, newY, newZ);
    }

    public double angleBetween(Vector other) {
        double cosThe = (this.dotProduct(other) / (this.getModulus() * other.getModulus()));
        cosThe = cosThe > 1 ? 1 : cosThe;
        cosThe = cosThe < -1 ? -1 : cosThe;
        return acos(cosThe);
    }

    @Override
    public String toString() {
        String vector = "[";
        vector += x >= 0 ? " " : " - ";
        vector += x >= 0 ? x : -x;
        vector += " i";
        vector += y >= 0 ? " + " : " - ";
        vector += y >= 0 ? y : -y;
        vector += " j";
        vector += z >= 0 ? " + " : " - ";
        vector += z >= 0 ? z : -z;
        vector += " k ]";
        return vector;
    }

    public double getX() {
        return x;
    }

    public void setX(double x) {
        this.x = x;
    }

    public double getY() {
        return y;
    }

    public void setY(double y) {
        this.y = y;
    }

    public double getZ() {
        return z;
    }

    public void setZ(double z) {
        this.z = z;
    }

    private double takeDouble(String msg, String invalidMsg) { // To take valid double
        System.out.print(msg);
        while (true) {
            if (sc.hasNextDouble()) {
                return sc.nextDouble();
            } else {
                System.out.print(invalidMsg);
                sc.next();
            }
        }
    }
}