#include<stdio.h>

int main()
    {
    int a[1000],i,c,d,count,m;
    float avr,k,n,j;
    scanf("%d",&c);

    for(d=0;d<c; d++)
        {
        avr=0; count=0; k=0;
        scanf("%f",&j);
        for(i=0;i<j;i++)
            {
            scanf("%d",&a[i]);
            k=k+a[i];
            }
        avr=k/j;
        for(m=0;m<j;m++)
            {
            if(a[m]>avr)
            count=count+1;
            }
        n=(100*count)/j;
        printf("%.3f%%\n",n);
        }
    return 0;
    }
