#include<stdio.h>
int main()
    {
    int t,a,b,i,j,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
        {
        x=0;
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
            {
            if(j%2!=0)
            x=x+j;
            }
        printf("Case %d: %d\n",i,x);
        }
    return 0;
    }
