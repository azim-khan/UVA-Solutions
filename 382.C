#include<stdio.h>
int main()
{
    long int n,i,s,set=0;
    while(scanf("%ld",&n))
    {
        s=0;
        if(set==0)
        printf("PERFECTION OUTPUT\n");
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }

        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
            s=s+i;
        }
        if(s<n)
            printf("%5ld  DEFICIENT\n",n);
        else if(s == n)
            printf("%5ld  PERFECT\n",n);
        else
            printf("%5ld  ABUNDANT\n",n);

        set=1;

    }
return 0;
}
