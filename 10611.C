#include<stdio.h>
int main()
{
    long int n,a[50005],m,b,i,j,k,min,max;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    scanf("%ld",&m);
    for(j=0;j<m;j++)
    {
        min=0;max=0;
        scanf("%ld",&b);
        for(k=0;k<i;k++)
        {
            if(a[k]>=b)
                break;
            min=a[k];
        }
        for(k=i-1;k>=0;k--)
        {
            if(a[k]<=b)
                break;
            max=a[k];
        }
        if(min==0)
            printf("X ");
        else
            printf("%ld ",min);
        if(max==0)
            printf("X\n");
        else
            printf("%ld\n",max);
    }
    return 0;
}
