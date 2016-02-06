#include<stdio.h>
int digSum(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int main()
{
    char boy[30],girl[30],ch;
    int bw,gw,i;
    double per;

    while(gets(boy))
    {
        gets(girl);
        bw=gw=0;

        for(i=0;boy[i];i++)
        {
            ch=boy[i];
            if(ch>=97&&ch<=122)
                ch=ch-32;
            if(ch>=65&&ch<=90)
                bw=bw+ch-64;
        }

        for(i=0;girl[i];i++)
        {
            ch=girl[i];
            if(ch>=97&&ch<=122)
                ch=ch-32;
            if(ch>=65&&ch<=90)
                gw=gw+ch-64;
        }

        while(bw>=10)
            bw=digSum(bw);

        while(gw>=10)
            gw=digSum(gw);

        if(bw>gw)
            per=(gw*100.0)/bw;
        else
            per=(bw*100.0)/gw;

        printf("%0.2lf %c\n",per,37);
    }
    return 0;
}
