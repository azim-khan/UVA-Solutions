#include<stdio.h>
#include<string.h>
int main()
{
    char y[100001];

    int m4,m100,m400,m15,m55,i,l,x,y1,z,count=0;

    while (scanf("%s",&y)==1)
    {
        x=y1=z=0;
        m4=0;
        m100=0;
        m15=0;
        m55=0;
        m400=0;
        l=strlen(y);

        if(count>0)
            printf("\n");
        count=1;

        for (i=0;i<l;i++)
        {
            m4=(m4*10+y[i]-'0')%4;
            m55=(m55*10+y[i]-'0')%55;
            m15=(m15*10+y[i]-'0')%15;
            m100=(m100*10+y[i]-'0')%100;
            m400=(m400*10+y[i]-'0')%400;
        }
        if ((m4==0 && m100!=0) || m400==0)
        {
            printf("This is leap year.\n");
            x=1;
        }
        if (m15==0)
            {
            printf("This is huluculu festival year.\n");
            y1=1;
            }
        if (m55==0&&x==1)
            {
            printf("This is bulukulu festival year.\n");
            z=1;
            }
        if(x==0&&y1==0&&z==0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}

