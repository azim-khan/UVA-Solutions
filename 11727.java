import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      Scanner in = new Scanner (System.in);
      
      int n = in.nextInt();
      int min, max;
      
      for(int i=0; i<n; i++){
        int a=in.nextInt();
        
        min = a;
        max = a;
        
        int b=in.nextInt();
        
        if(b>max)
            max=b;
        else if (b<min)
            min=b;
            
        int c=in.nextInt();
          
        if(c>max)
            max=c;
        else if(c<min)
            min=c;        
        
            System.out.println("Case "+(i+1)+": "+(a+b+c-max-min));     
      }
    }
}