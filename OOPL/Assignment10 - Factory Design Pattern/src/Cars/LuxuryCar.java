package Cars;

public class LuxuryCar extends Car {

    public LuxuryCar() {
        super(Model.LUXURY);
    }

    @Override
    protected void finalizeBuild() {
        System.out.println("Finalizing Luxury Car Build.");
        System.out.println("Assembled Engine parts.");
        System.out.println("Assembled Drive transmission and steering parts.");
        System.out.println("Assembled Suspension and brake parts.");
        System.out.println("Assembled Electrical parts.");
        System.out.println("Assembled Body and chassis.");
        System.out.println();
        System.out.println("Luxury Car Build Completed.");
    }
}
