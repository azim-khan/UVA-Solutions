#include<stdio.h>
int main()
{
    long sum,n;
    int i,x,y;
    while(scanf("%ld",&n)!=EOF)
    {
        sum=0;
        for(i=1;sum<n;i++)
            sum+=i;
        if(i%2==1)
        {
            x=(i-1)-(sum-n);
            y=i-x;
        }
        else
        {
            y=(i-1)-(sum-n);
            x=i-y;
        }
        printf("TERM %ld IS %d/%d\n",n,x,y);
    }
    return(0);
}
