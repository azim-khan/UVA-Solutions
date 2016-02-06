
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

      public static void main(String[] args) {
            BigInteger fibonacci [] = new BigInteger [4790];
            fibonacci[1] = BigInteger.ONE;
            fibonacci[2] = BigInteger.ONE;

            for ( int i = 3; i < 4790; i++ ) {
                  fibonacci[i] = fibonacci[i - 1].add(fibonacci[i - 2]);
            }

            Scanner inp = new Scanner (System.in);

            while ( inp.hasNextInt() ) {
                  int n = inp.nextInt();
                  System.out.println (fibonacci[n]);
            }
      }
}
