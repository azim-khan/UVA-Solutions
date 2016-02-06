#include<stdio.h>
long int A[10005];
int BubbleSort(int l)
{
    long int temp,k,j;
    for (k=l-1;k>=1;k--)
    {
        for (j=0;j<k;j++)
        {
            if (A[j] > A[j+1])
                {
                    temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                }
        }
    }
return 0;
}
int main()
{
    long int x,y,i,m,B,c=1,s,n;
    while(scanf("%ld%ld",&x,&y))
    {
        if(x==0&&y==0) break;

        for(i=0;i<x;i++)
            scanf("%ld",&A[i]);

        BubbleSort(i);
        printf("CASE# %ld:\n",c++);
        for(m=0;m<y;m++)
        {
            s=0;
            scanf("%ld",&B);
            for(n=0;n<i;n++)
            {
                if(A[n]==B)
                {
                    printf("%ld found at %ld\n",B,n+1);
                    s=1;
                    break;
                }
                else if ( A[n]>B ) break;
            }
            if(s==0)
                printf("%ld not found\n",B);
        }
    }
    return 0;
}
