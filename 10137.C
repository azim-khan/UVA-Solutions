#include<stdio.h>

int main()
{
    double sum,cost[1000],hi,lo,sh,sl;
    int i,n;

    while(scanf("%d",&n))
    {
        if(n==0) break;
        sum=sh=sl=0;
        for(i=0;i<n;i++)
        {
            scanf("%lf",&cost[i]);
            sum=sum+cost[i];
        }

        hi=(int)((sum/n+0.0099)*100);
        lo=(int)((sum/n)*100);

        hi=hi/100;
        lo=lo/100;

        for(i=0;i<n;i++)
            if(cost[i]>hi)
                sh=sh+cost[i]-hi;
            else if(cost[i]<lo)
                sl=sl+lo-cost[i];

        if(sh>sl)
            printf("$%0.2lf\n",sh);
        else
            printf("$%0.2lf\n",sl);
    }
    return 0;
}
