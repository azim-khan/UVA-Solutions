#include<stdio.h>
#include<math.h>
int main()
{
    long long n,N,k=1;
    while(scanf("%lld",&N)&&N)
    {
        n=ceil((3+sqrt(9+8*N))/2);
        printf("Case %lld: %lld\n",k++,n);
    }
    return 0;
}
