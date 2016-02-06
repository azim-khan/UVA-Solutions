import java.math.BigInteger;
import java.util.Scanner;

public class Main {

        public static void main(String[] args) {

        Scanner cin = new Scanner(System.in);
        int N, M;
        while(cin.hasNextInt()) {
            N = cin.nextInt();
            M = cin.nextInt();
            if(N==0&&M==0) break;
            BigInteger sum1 = new BigInteger("1"),
                       sum2 = new BigInteger("1"),
                       sum3 = new BigInteger("1");

            for(int i = 1; i <= N; i++)
                sum1 = sum1.multiply(BigInteger.valueOf(i));
            for(int i = 1; i <= M; i++)
                sum2 = sum2.multiply(BigInteger.valueOf(i));
            for(int i = 1; i <=N-M; i++)
                sum3 = sum3.multiply(BigInteger.valueOf(i));
            sum1=sum1.divide(sum2.multiply(sum3));

            System.out.println(N+" things taken "+M+" at a time is "+sum1+" exactly.\n");
        }
        }
    }
