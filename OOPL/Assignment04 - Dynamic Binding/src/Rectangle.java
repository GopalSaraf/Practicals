public class Rectangle extends Shape {
    public void takeDimensions() { // To take dimensions
        System.out.print("Enter length of rectangle > ");
        setLength(sc.nextInt());
        System.out.print("Enter breadth of rectangle > ");
        setBreadth(sc.nextInt());
    }

    @Override
    public void computeArea() { // To compute area
        float area = (float) length * (float) breadth;
        System.out.println("Area of rectangle is " + area);
    }
}
