public class Triangle extends Shape{
    public void takeDimensions() {  // To take dimensions
        System.out.print("Enter length of triangle > ");
        setLength(sc.nextInt());
        System.out.print("Enter height of triangle > ");
        setBreadth(sc.nextInt());
    }

    @Override
    public void computeArea() {     // To compute area
        float area = (float) length * (float) breadth / 2;
        System.out.println("Area of triangle is " + area);
    }
}
