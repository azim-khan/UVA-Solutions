#include<stdio.h>

int GCD(int a,int b)
{
    if(b==0)
        return a;
    return GCD(b,a%b);
}

long int Calculate(int N){
    int i, j;
    long int G=0;
    for(i=1;i<N;i++){
        for(j=i+1;j<=N;j++)
        {
            G+=GCD(i,j);
        }
    }

    return G;
}

int main()
{
    int N, k;

    for(k=0;k<100;k++){
       scanf("%d", &N);
       if(N==0)
           break;

       long int result = Calculate(N);

       printf("%ld\n", result);
    }

    return 0;
}

