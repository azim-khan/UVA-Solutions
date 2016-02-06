#include<stdio.h>
#include <string.h>

char input [10000];
int len_input;

int getVal (char v)
{
    if ( v >= '0' && v <= '9' ) return v - '0';
    else if ( v >= 'A' && v <= 'Z' ) return v - 'A' + 10;
    else return v - 'a' + 36;
}

int findBase ()
{
    char maxi = '1';
    int i;
    for ( i = 0; i < len_input; i++ )
        if ( maxi < input [i] ) maxi = input [i];

    return getVal (maxi) + 1;
}


int main ()
{
    int i;
    while ( scanf ("%s", input) == 1 ) {

        len_input = strlen (input);
        if ( input [0]=='+'||input [0]=='-' ){
            for ( i = 1; i <= len_input; i++ )
                input [i - 1] = input [i];

                len_input = strlen (input);
            }

        int baseFound = 0;

        int sum = 0;

        for ( i = 0; i < len_input; i++ )
            sum += getVal (input [i]);

        for ( i = findBase(); i <= 62; i++ ) {
            if ( sum % (i - 1) == 0 ) {
                printf ("%d\n", i);
                baseFound = 1;
                break;
            }
        }

        if ( baseFound==0 )
            printf ("such number is impossible!\n");
    }

    return 0;
}
