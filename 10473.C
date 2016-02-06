#include <stdlib.h>
#include <stdio.h>

int main ()
{
    long n;
    char a [20];

    while (scanf("%s",&a))
    {

        if ( a [0] == '0' && a [1] == 'x' )
        {
            n = strtol (a, NULL, 16);
            printf ("%ld\n",n);
        }

        else
        {
            n = atoi (a);
            if ( n < 0 )
                return 0;
            printf("0x%X\n", n);
        }
    }

    return 0;
}
