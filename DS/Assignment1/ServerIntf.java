import java.rmi.*;

public interface ServerIntf extends Remote {
  public double add(double num1, double num2) throws RemoteException;

  public double subtract(double num1, double num2) throws RemoteException;

  public double multiply(double num1, double num2) throws RemoteException;

  public double divide(double num1, double num2) throws RemoteException;
}
