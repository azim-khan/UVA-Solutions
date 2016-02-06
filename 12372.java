import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      Scanner in = new Scanner (System.in);
      
      int n = in.nextInt();
      
      for(int i=0; i<n; i++){
        int a=in.nextInt();
        
        int status=1;
        
        if(a>20)
            status=0;
        
        int b=in.nextInt();
        
        if(b>20)
            status=0;
            
        int c=in.nextInt();
          
        if(c>20)
            status=0;       
        
        System.out.println("Case "+(i+1)+": "+(status==0?"bad":"good"));     
      }
    }
}