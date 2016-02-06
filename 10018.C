#include<stdio.h>
#include<math.h>
long long length(long long h)
{
    long long o=0;
    while(h!=0)
    {
        h=h/10;
        o++;
    }
    return o;
}
long long rev(long long t)
{
    long long s=0,p;
    p=length(t)-1;
    while(t!=0)
    {
        s=(long long)(s+(t%10)*pow(10,p));
        t=t/10;
        p--;
    }
    return s;
}
int main()
{
    long long m,n,i,j,r;
    scanf("%lld",&m);
    for(i=0;i<m;i++)
    {
        j=0;
        scanf("%lld",&n);
        while(1)
        {
            r=rev(n);
            n=n+r;
            j++;
            if(n==rev(n)) break;
        }
        printf("%lld %lld\n",j,n);
    }

    return 0;
}
