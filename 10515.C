#include<stdio.h>
#include<string.h>
int power(int m, int n)
{
    int total,i;
    if (m == 0)
        return 0;
    if (n == 0)
        total = 1;
    else
        total = m;

    for (i = 1; i < n; ++i)
    {
        total = total * m;
        total = total % 10;
    }
    return total;
}
int main()
{
    int m,n,l1,l2,t;
    char a[105],b[105];
    while(scanf("%s%s",&a,&b))
    {
        l1=strlen(a);
        l2=strlen(b);
        if(l1==1&&l2==1&&a[0]=='0'&&b[0]=='0')
            break;

        m=a[l1-1]-48;
        if(l2==1)
            n=b[0]-48;
        else
            n=b[l2-1]-48+(b[l2-2]-48)*10;
        if(n==0)
            t=power(m,100)%10;
        else
            t=power(m,n)%10;
        printf("%d\n",t);
    }
    return 0;
}
