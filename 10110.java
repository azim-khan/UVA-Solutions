import static java.lang.Math.sqrt;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      Scanner in = new Scanner (System.in);
           
      while(in.hasNext())
      {
        long n = in.nextLong();
        if(n==0) break;
          
        long root = (long) sqrt(n);
          
        System.out.println(root*root==n?"yes":"no");
      }     
    }
}