import java.util.*;
public class q3 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        sc.close();
        while(n!=0){
           int digit = n%10;
           System.out.println(digit);
           n=n/10;
    
        }
    }
}
