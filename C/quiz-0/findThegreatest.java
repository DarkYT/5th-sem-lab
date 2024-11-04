import java.util.Scanner;

public class findThegreatest {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the first number: ");
        int a = scanner.nextInt();
        
        System.out.print("Enter the second number: ");
        int b = scanner.nextInt();
        
        System.out.print("Enter the third number: ");
        int c = scanner.nextInt();
        
        if (a > b && a > c) {
            System.out.println(a + " is the greatest");
        } else if (b > c && b > a) {
            System.out.println(b + " is the greatest");
        } else {
            System.out.println(c + " is the greatest");
        }
        
        scanner.close();
    }
}