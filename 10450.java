import java.math.BigInteger;
import java.util.Scanner;

public class Main {

      public static void main(String[] args) {
            BigInteger fibonacci [] = new BigInteger [52];
            fibonacci[0] = BigInteger.ONE;
            fibonacci[1] = BigInteger.valueOf(2);

            for ( int i = 2; i < 52; i++ ) {
                  fibonacci[i] = fibonacci[i - 1].add(fibonacci[i - 2]);
            }
            int k=1;
            Scanner inp = new Scanner (System.in);
            int n = inp.nextInt();

            for(int j=0;j<n;j++){
                  int m = inp.nextInt();
                  System.out.println ("Scenario #"+k+":\n"+fibonacci[m]+"\n");
                  k++;
            }
      }
}
