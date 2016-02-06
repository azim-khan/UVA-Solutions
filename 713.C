#include<stdio.h>
#include<string.h>
char ch1[205],ch2[205];
int add(int l)
{
    int s=0,j,m,c=0;
    for(j=0;j<l;j++)
    {
        m=ch1[j]+ch2[j]-96+c;
        c=m/10;
        if(m%10!=0)
            s=1;
        if(s==1)
            printf("%d",m%10);
        if(j==l-1&&c>0)
            printf("%d",c);
    }
    printf("\n");
    return 0;
}
int main()
{
    int l1,l2,i,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%s",&ch1,&ch2);
        l1=strlen(ch1);
        l2=strlen(ch2);
        if(l1>l2)
        {
            for(k=l2;k<l1;k++)
                ch2[k]='0';
            add(l1);
        }
        else if(l2>l1)
        {
            for(k=l1;k<l2;k++)
                ch1[k]='0';
            add(l2);
        }
        else
            add(l1);
    }
    return 0;
}
