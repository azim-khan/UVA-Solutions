import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    public static void main(String arg[])
    {
        Scanner inp= new Scanner(System.in);
        while(inp.hasNext())
        {
            BigInteger m= inp.nextBigInteger();
            BigInteger p= new BigInteger("0");
            BigInteger n= factorial(m);
            while(n.compareTo(BigInteger.ZERO)!=0)
            {
                p=p.add(n.remainder(BigInteger.valueOf(10)));
                n=n.divide(BigInteger.valueOf(10));
            }
            System.out.println(p);                            
            }
        }
    static BigInteger factorial(BigInteger n) 
    {
        if (n.compareTo(BigInteger.valueOf(0))==0)
            return BigInteger.ONE;
        else
        {
            return n.multiply(factorial(n.subtract(BigInteger.valueOf(1))));
        }
    }
}