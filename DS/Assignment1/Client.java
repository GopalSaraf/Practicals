import java.rmi.*;

public class Client {
  public static void main(String args[]) {
    try {
      double num1, num2;
      ServerIntf server = (ServerIntf) Naming.lookup("rmi://localhost/server");

      num1 = Double.parseDouble(args[0]);
      num2 = Double.parseDouble(args[1]);

      System.out.println("Num 1: " + num1);
      System.out.println("Num 2: " + num2);
      System.out.println("---");
      System.out.println("Addition: " + server.add(num1, num2));
      System.out.println("Subtraction: " + server.subtract(num1, num2));
      System.out.println("Multiplication: " + server.multiply(num1, num2));
      System.out.println("Division: " + server.divide(num1, num2));
    } catch (Exception e) {
      System.out.println("Exception in client: " + e.getMessage());
    }
  }
}
