import java.util.Scanner;

public class Main{

     public static void main(String[] args) {

        Scanner cin = new Scanner(System.in);
        int T=cin.nextInt();

        for(int i=0; i<T; i++){
            int N=cin.nextInt();
            String[] sub=new String[101];
            int[] time=new int[101];
            int D;
            String dSub;

            for(int j=0; j<N; j++){
                sub[j]=cin.next();
                time[j]=cin.nextInt();
            }

            D=cin.nextInt();
            dSub=cin.next();

            int subNum=-1;
            for(int j=0; j<N; j++){
                if(sub[j].compareTo(dSub)==0){
                   subNum=j;
                   break;
                }
            }

            if(subNum>-1 && time[subNum]<=D){
               System.out.println("Case "+(i+1)+": Yesss");
            }
            else if(subNum>-1 && time[subNum]<=D+5){
               System.out.println("Case "+(i+1)+": Late");
            }
            else{
               System.out.println("Case "+(i+1)+": Do your own homework!");
            }
        }
    }
}
