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
            BigInteger n= inp.nextBigInteger();            
            BigInteger p=m.multiply(n);
            System.out.println(p);                            
            }
        }
}