import java.util.ArrayList;
import java.util.Scanner;

public class MyArray <T> {
    private final ArrayList<T> myArray = new ArrayList<>();
    private final Scanner sc = new Scanner(System.in);

    public void takeInput() {
        System.out.print("Enter number of elements in array > ");
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            System.out.print("Enter element number " + i + " > ");
            myArray.add((T) sc.next());
        }
        System.out.println();
        System.out.print("Array created : " + myArray);
        System.out.println();
        System.out.println();
    }

    public void showEven() {
        System.out.print("Even Numbers : ");
        for (T i : myArray) {
            if (isEven(i)) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }

    public void showOdd() {
        System.out.print("Odd Numbers : ");
        for (T i : myArray) {
            if (isOdd(i)) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }

    public void showPrime() {
        System.out.print("Prime Numbers : ");
        for (T i : myArray) {
            if (isPrime(i)) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }

    public void showPalindrome() {
        System.out.print("Palindromes : ");
        for (T i : myArray) {
            if (isPalindrome(i)) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }

    private boolean isEven(int numToCheck) {
        return numToCheck % 2 == 0;
    }

    private boolean isEven(T numToCheck) {
        return isEven(Integer.parseInt((String) numToCheck));
    }

    private boolean isOdd(int numToCheck) {
        return numToCheck % 2 == 1;
    }

    private boolean isOdd(T numToCheck) {
        return isOdd(Integer.parseInt((String) numToCheck));
    }

    private boolean isPrime(int numToCheck) {
        if (numToCheck <= 1)
            return false;
        if (numToCheck % 2 == 0)
            return false;
        for (int i = 3; i <= numToCheck/2 ; i += 2) {
            if (numToCheck % i == 0)
                return  false;
        }
        return true;
    }

    private boolean isPrime(T numToCheck) {
        return isPrime(Integer.parseInt((String) numToCheck));
    }

    private boolean isPalindrome(String strToCheck) {
        StringBuilder reversedStr = new StringBuilder();
        for (int i = strToCheck.length() - 1; i >= 0; i--)
            reversedStr.append(strToCheck.charAt(i));
        return strToCheck.equals(reversedStr.toString());
    }

    private boolean isPalindrome(T strToCheck) {
        return isPalindrome((String) strToCheck);
    }
}
