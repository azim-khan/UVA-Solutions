#include<stdio.h>
int main()
{
    int n,m,i,j,t,tt,k;
    scanf("%d",&n);
    for(k=0;k<n;k++)
        {
        i=0; j=0;
        scanf("%d",&m);
        t=m;
        while(m!=0)
            {
            if(m%2==1)
                i++;
            m=m/2;
            }
        while(t!=0)
            {
            tt=t%10;
            if(tt==1||tt==2||tt==4||tt==8)
                j++;
            else if(tt==3||tt==5||tt==6||tt==9)
                j=j+2;
            else if(tt==7)
                j=j+3;
            else {}
            t=t/10;
            }
        printf("%d %d\n",i,j);
        }
    return 0;
}
