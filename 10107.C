#include<stdio.h>
long int a[10005];
long int indx;

void InsertionSort()
{
    int k,ptr,temp,j;
    if(indx<2)
        return;
    for(k=2;k<=indx;k++)
    {
        temp=a[k];
        ptr=k-1;
        while(temp<a[ptr])
        {
            a[ptr+1]=a[ptr];
            ptr=ptr-1;
        }
        a[ptr+1]=temp;
    }
}
int main()
{
    long int n,i,position,median;
    indx=0;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        median=0;
        indx=indx+1;
        a[indx]=n;
        InsertionSort();
        if(indx%2==0)
        {
            position=indx/2;
            median=(a[position]+a[position+1])/2;
        }
        else
        {
            position=(indx+1)/2;
            median=a[position];
        }
        printf("%ld\n",median);
    }
    return 0;
}
