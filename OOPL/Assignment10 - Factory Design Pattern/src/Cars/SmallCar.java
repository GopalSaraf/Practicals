package Cars;

public class SmallCar extends Car {

    public SmallCar() {
        super(Model.SMALL);
    }

    @Override
    protected void finalizeBuild() {
        System.out.println("Finalizing Small Car Build.");
        System.out.println("Assembled Engine parts.");
        System.out.println("Assembled Drive transmission and steering parts.");
        System.out.println("Assembled Suspension and brake parts.");
        System.out.println("Assembled Electrical parts.");
        System.out.println("Assembled Body and chassis.");
        System.out.println();
        System.out.println("Small Car Build Completed.");
    }
}
