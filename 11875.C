#include<stdio.h>

int main(){
    int t,n,p[10],i,j;
    scanf("%d",&t);

    for(i=0; i<t; i++){
       scanf("%d",&n);
       for(j=0;j<n;j++){
          scanf("%d",&p[j]);
       }

       printf("Case %d: %d\n", i+1, p[n/2]);
    }

    return 0;
}
