import java.util.Scanner;

abstract class Shape {
    protected int length; // length of shape
    protected int breadth; // breadth of shape
    protected Scanner sc = new Scanner(System.in);

    Shape(int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    Shape() {
        this(0, 0);
    }

    protected void setLength(int length) {
        this.length = length;
    }

    protected void setBreadth(int breadth) {
        this.breadth = breadth;
    }

    abstract public void takeDimensions();

    abstract public void computeArea();
}
