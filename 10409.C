#include<stdio.h>
#include<string.h>
int main ()
{
    int n,i;
    char ch[6];
    while (scanf("%d",&n)&& n) {

        int top = 1;
        int down = 6;
        int east = 4;
        int west = 3;
        int north = 2;
        int south = 5;
        int temp = 0;

        for(i=0;i<n;i++)
        {
            scanf("%s",&ch);
            if ( strcmp(ch,"north")==0)
            {
                temp = north;
                north = top;
                top = south;
                south = down;
                down = temp;
            }
            else if ( strcmp(ch,"south")==0 )
            {
                temp = top;
                top = north;
                north = down;
                down = south;
                south = temp;
            }
            else if ( strcmp(ch,"west")==0 )
            {
                temp = top;
                top = east;
                east = down;
                down = west;
                west = temp;
            }
            else
            {
                temp = top;
                top = west;
                west = down;
                down = east;
                east = temp;
            }
        }
        printf ("%d\n", top);
    }
    return 0;
}
