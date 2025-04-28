import java.rmi.*;
import java.rmi.server.*;

public class ServerImpl extends UnicastRemoteObject implements ServerIntf {
  public ServerImpl() throws RemoteException {
  }

  public double add(double num1, double num2) throws RemoteException {
    return num1 + num2;
  }

  public double subtract(double num1, double num2) throws RemoteException {
    return num1 - num2;
  }

  public double multiply(double num1, double num2) throws RemoteException {
    return num1 * num2;
  }

  public double divide(double num1, double num2) throws RemoteException {
    return num1 / num2;
  }
}
