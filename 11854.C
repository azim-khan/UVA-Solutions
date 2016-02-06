#include <stdio.h>

int main(){
    int a, b , c, t, i=1;
    while(scanf("%d%d%d",&a, &b, &c)==3)
    {
        if(a==0&&b==0&&c==0) break;

        if(a>c){
            t=a;
            a=c;
            c=t;
        }
        if(b>c){
            t=b;
            b=c;
            c=t;
        }

        if(a*a+b*b==c*c){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }
    }

    return 0;
}
