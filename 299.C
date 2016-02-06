#include<stdio.h>
int BubbleSort(int A[],int l)
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
    int n,i,a[51],ln,t;
    scanf("%d",&n);
    for(t=0;t<n;t++)
    {
        scanf("%d",&ln);
        for(i=0;i<ln;i++)
        {
            scanf("%d",&a[i]);
        }
    printf("Optimal train swapping takes %d swaps.\n",BubbleSort(a,ln));
    }
    return 0;
}

