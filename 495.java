import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    public static void main(String arg[])
    {
        Scanner inp= new Scanner(System.in);
        while(inp.hasNext())
        {
            int m= inp.nextInt();

            System.out.println("The Fibonacci number for "+m+" is "+Divide_Conquer_Fib(m-2));

            }
        }

public static  BigInteger Divide_Conquer_Fib(int n)
{
    if(n==-2) return BigInteger.ZERO;
    BigInteger i = new BigInteger("1"),
               h = new BigInteger("1");
    BigInteger j = new BigInteger("1"),
               k = new BigInteger("0"),
               t = new BigInteger("1");
    while (n > 0) {
        if (n%2 == 1) {
        t = j.multiply(h);
        j = ((i.multiply(h)).add( j.multiply(k))).add(t);
        i = (i.multiply(k)).add(t);
        }
    t = h.multiply(h);
    h = ((k.multiply(h)).multiply(BigInteger.valueOf(2))).add(t);
    k = (k.multiply(k)).add(t);
    n = (int) n/2;
    }
    return j;
}
}
