import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      Scanner in = new Scanner (System.in);
           
      while(in.hasNext())
      {
        int n = in.nextInt();
        if(n==0) break;
        int result=n*(n+1)*(2*n+1)/6;  
        System.out.println(result);
      }     
    }
}