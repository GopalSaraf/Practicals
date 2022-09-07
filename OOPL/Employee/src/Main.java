import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        char option;

    while (true) {
        System.out.println("Choose type of employee to generate pay slip : ");
        System.out.println("a - Project Manager");
        System.out.println("b - Assistant Project Manager");
        System.out.println("c - Team Leader");
        System.out.println("d - Programmer");
        System.out.println("e - Exit Program");
        System.out.println();
        System.out.print("Your Choice > ");
        option = sc.next().charAt(0);

        switch (option) {
            case 'a' -> {
                var projMan = new ProjectManager();
                projMan.getData();
                projMan.display();
            }
            case 'b' -> {
                var assProjMan = new AssistantProjectManager();
                assProjMan.getData();
                assProjMan.display();
            }
            case 'c' -> {
                var teamLead = new TeamLead();
                teamLead.getData();
                teamLead.display();
            }
            case 'd' -> {
                var programmer = new Programmer();
                programmer.getData();
                programmer.display();
            }
            case 'e' -> {
                System.out.println("Exiting Program...");
                System.exit(0);
            }
            default -> {
                System.out.println("Incorrect Option. Try again...");
                System.out.println();
            }
        }
    }

    }
}