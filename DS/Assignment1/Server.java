import java.rmi.*;

public class Server {
  public static void main(String args[]) {
    try {
      ServerImpl serverImpl = new ServerImpl();
      Naming.rebind("server", serverImpl);
      System.out.println("Server started..");
    } catch (Exception e) {
      System.out.println("Exception in server: " + e.getMessage());
    }
  }
}
