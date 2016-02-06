#include<stdio.h>
//#include<iostream.h>
//long square[10001];
//using namespace std;
int main()
{
    /*long d,i,k,lim,p1,p2,div;
    for(i=0;i<=10000;i++)
        square[i]=i*i;
    while(scanf("%ld",&d)==1)
    {
        if(d==2)
        {
            lim=99;
            div=10;
        }
        else if(d==4)
        {
            lim=9999;
            div=100;
        }
        else if(d==6)
        {
            lim=999999;
            div=1000;
        }
        else if(d==8)
        {
            lim=99999999;
            div=10000;
        }
        for(i=0;square[i]<=lim;i++)
        {
            p1=square[i]/div;
            p2=square[i]%div;
            k=p1+p2;
            cout.width(d);
            cout.fill('0');
            if(k*k==square[i])
                cout<<square[i]<<endl;
        }
    }*/
    int d;
    while(scanf("%d",&d)==1)
    {
        if(d==2)
            printf("00\n01\n81\n");
        else if(d==4)
            printf("0000\n0001\n2025\n3025\n9801\n");
        else if(d==6)
            printf("000000\n000001\n088209\n494209\n998001\n");
        else if(d==8)
            printf("00000000\n00000001\n04941729\n07441984\n24502500\n25502500\n52881984\n60481729\n99980001\n");
    }
    return 0;
}
