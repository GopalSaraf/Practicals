import Cars.Car;
import Cars.LuxuryCar;
import Cars.SedanCar;
import Cars.SmallCar;

public class CarFactory {

    public static Car buildCar(Car.Model model) {
        Car car = null;
        switch (model) {
            case SEDAN -> car = new SedanCar();
            case SMALL -> car = new SmallCar();
            case LUXURY -> car = new LuxuryCar();
        }
        return car;
    }
}
