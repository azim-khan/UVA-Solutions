import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    public static void main(String arg[])
    {
        BigInteger sum=new BigInteger("0");
        Scanner inp= new Scanner(System.in);
        while(inp.hasNext())
        {
            BigInteger n=inp.nextBigInteger();            
            
            if(n.compareTo(BigInteger.ZERO)==0) break;
            sum=sum.add(n);
        }
    System.out.println(sum);
    } 
}
