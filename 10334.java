import java.math.BigInteger;
import java.util.Scanner;

public class Main {

      public static void main(String[] args) {
            BigInteger fibonacci [] = new BigInteger [1002];
            fibonacci[0] = BigInteger.ONE;
            fibonacci[1] = BigInteger.valueOf(2);

            for ( int i = 2; i < 1002; i++ ) {
                  fibonacci[i] = fibonacci[i - 1].add(fibonacci[i - 2]);
            }

            Scanner inp = new Scanner (System.in);

            while ( inp.hasNextInt() ) {
                  int n = inp.nextInt();
                  System.out.println (fibonacci[n]);
            }
      }
}
