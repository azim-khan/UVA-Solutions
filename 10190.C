#include<stdio.h>
int main ()
{
    long int n,c,m,t;

    while ( scanf ("%ld %ld", &n, &m) != EOF )
    {

        c=0;
        if ( n < 2 || m < 2 || m > n ) {
            printf ("Boring!\n");
            continue;
        }
        t=n;
        while ( n > 1 ) {
            if ( n % m == 0 ) c=0;
            else
            {
                c=1;
                break;
            }
            n = n/m;
        }

        if (c==1)
            printf ("Boring!\n");
        else
        {
            while(1)
            {
                printf("%ld ",t);
                t=t/m;
                if(t==1)
                {
                    printf("1");
                    break;
                }
            }
            printf ("\n");
        }
    }

    return 0;
}
