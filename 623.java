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
            BigInteger k=new BigInteger("0");
            k=BigInteger.valueOf(m);
            System.out.println(m+"!\n"+factorial(k));                
            
            }
        }
static BigInteger factorial(BigInteger n) {
if (n.compareTo(BigInteger.valueOf(0))==0)
    return BigInteger.ONE;
else
{
    return n.multiply(factorial(n.subtract(BigInteger.valueOf(1))));
}
}
} 