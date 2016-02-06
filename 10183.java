
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

      public static void main(String[] args) {
            BigInteger fibonacci [] = new BigInteger [1002];
            fibonacci[1] = BigInteger.ONE;
            fibonacci[2] = BigInteger.valueOf(2);

            for ( int i = 3; i < 1002; i++ ) {
                  fibonacci[i] = fibonacci[i - 1].add(fibonacci[i - 2]);
            }
            
            Scanner inp = new Scanner (System.in);

            while ( inp.hasNext() ) {
                  BigInteger a = inp.nextBigInteger();
                  BigInteger b = inp.nextBigInteger();
                  int count=0;
                  
                  if(a.equals(BigInteger.ZERO) && b.equals(BigInteger.ZERO)) break;
                  
                  else if(a.compareTo(BigInteger.ZERO)==0 && b.compareTo(BigInteger.ONE)==0)
                  {
                    System.out.println(1);
                    continue;
                  }
                          
                  else if(a.compareTo(BigInteger.ONE)==0 && b.compareTo(BigInteger.ONE)==0)
                  {
                    System.out.println(1);
                    continue;
                  }
                  
                  
                    int i=1;
                  
                    while(fibonacci[i].compareTo(b)<1){                  
                      if(fibonacci[i].compareTo(a)>-1)
                          count++;
                      i++;
                    }
                    
                    System.out.println(count);
            }
      }
}
