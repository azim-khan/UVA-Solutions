#include<stdio.h>
long bigmod(long b,long p,long m)
{
    if (p == 0)
        return 1;
    else if (p%2 == 0)
        return bigmod(b,p/2,m)*bigmod(b,p/2,m) % m;
    else
        return ((b % m) * bigmod(b,p-1,m)) % m;
}
int main()
{
    long B,P,M;
    while(scanf("%ld%ld%ld",&B,&P,&M)!=EOF)
    {
        printf("%ld\n",bigmod(B,P,M));
    }
    return 0;
}
