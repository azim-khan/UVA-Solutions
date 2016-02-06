#include<stdio.h>

int main()
{
    long int digit1, digit2,carry, count,mod1,mod2,sum,l,big;
    while(scanf("%ld %ld",&digit1, &digit2)==2)
    {
        if(digit1==0 && digit2==0)
            break;
        if(digit1>digit2)
            big=digit1;
        else
            big=digit2;
        l=0;
        while(big!=0) /* count the length of big number*/
        {
            big/=10;
            l++;
        }
        count=0;
        carry=0;
        while(l!=0)
        {
            mod1=digit1%10;
            digit1=digit1/10;
            mod2=digit2%10;
            digit2=digit2/10;
            sum=mod1+mod2+carry;

            if(sum>9)
            {
                count++;
                carry=sum/10;
            }
            else
                carry=0;
            l--;
        }

            if(count==0)
                printf("No carry operation.\n");
            else if(count==1)
               printf("1 carry operation.\n");
            else
                printf("%ld carry operations.\n",count);
    }

    return 0;
}
