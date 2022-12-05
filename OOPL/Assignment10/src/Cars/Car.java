package Cars;

public abstract class Car {
    public enum Model {
        SMALL,
        SEDAN,
        LUXURY
    }

    private Model model;

    public Car(Model model) {
        this.model = model;
    }

    public void build() {
        initializeBuild();
        finalizeBuild();
    }

    private void initializeBuild() {
        System.out.println("Initializing the build of car.");
        System.out.println("Collected Engine parts.");
        System.out.println("Collected Drive transmission and steering parts.");
        System.out.println("Collected Suspension and brake parts.");
        System.out.println("Collected Electrical parts.");
        System.out.println("Collected Body and chassis.");
        System.out.println();
    }

    protected abstract void finalizeBuild();

    public Model getModel() {
        return model;
    }

    public void setModel(Model model) {
        this.model = model;
    }
}
