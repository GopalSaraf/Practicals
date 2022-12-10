// Title : Polymorphism
// Problem Statement :
// Design and develop inheritance for a given case study, identify objects and
// relationships and implement inheritance wherever applicable.
// Employee class has Emp_name, Emp_id, Address, Mail_id, and Mobile_no as members.
// Inherit the classes: Programmer, Team Lead, Assistant Project Manager and
// Project Manager from employee class.
// Add Basic Pay (BP) as the member of all the inherited classes with 97% of BP
// as DA, 10 % of BP as HRA, 12% of BP as PF, 0.1% of BP for staff club fund.
// Generate payslips for the employees with their gross and net salary.

// Program by : 23168 Gopal Saraf

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
                    var projMan = new ProjectManager(); // Project Manager
                    projMan.getData();
                    projMan.display();
                }
                case 'b' -> {
                    var assProjMan = new AssistantProjectManager(); // Assistant Project Manager
                    assProjMan.getData();
                    assProjMan.display();
                }
                case 'c' -> {
                    var teamLead = new TeamLead(); // Team Leader
                    teamLead.getData();
                    teamLead.display();
                }
                case 'd' -> {
                    var programmer = new Programmer(); // Programmer
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