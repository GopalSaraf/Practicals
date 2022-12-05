package Cars;

public class SedanCar extends Car{

    public SedanCar() {
        super(Model.SEDAN);
    }

    @Override
    protected void finalizeBuild() {
        System.out.println("Finalizing Sedan Car Build.");
        System.out.println("Assembled Engine parts.");
        System.out.println("Assembled Drive transmission and steering parts.");
        System.out.println("Assembled Suspension and brake parts.");
        System.out.println("Assembled Electrical parts.");
        System.out.println("Assembled Body and chassis.");
        System.out.println();
        System.out.println("Sedan Car Build Completed.");
    }
}
