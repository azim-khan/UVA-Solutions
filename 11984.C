#include<stdio.h>
int main()
{
    int t, i, c, d;
    float f;
    scanf("%d", &t);

    for(i=0; i<t; i++){
        scanf("%d%d", &c, &d);

        f= (9.0/5.0)*c+32;
        f = f+d;
        f=5*(f-32)/9;

        printf("Case %d: %.2f\n", i+1, f);
    }

    return(0);
}

