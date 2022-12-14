import java.util.Scanner;


class Main {
    public static void main(String[] args) {
        float temp;
        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("Enter temp > ");
            temp = sc.nextFloat();
            if (temp <= -5) {
                throw new Exception("Temp very cold");
            } else if (temp >= 35) {
                throw new Exception("Temp very hot");
            }
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}