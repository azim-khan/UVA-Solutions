#include<stdio.h>
int BubbleSort(long long A[],int l)
{
int count=0,temp,k,j;
    for (k=l-1;k>=1;k--)
    {
        for (j=0;j<k;j++)
        {
            if (A[j] > A[j+1])
                {
                    temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                    count++;
                }
        }
    }
return count;
}
int main()
{
    int n,i;
    long long a[1001];
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
    printf("Minimum exchange operations : %d\n",BubbleSort(a,n));
    }
    return 0;
}
