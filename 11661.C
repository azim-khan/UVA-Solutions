#include <stdio.h>
#include <string.h>

int main() {
    int n, min, R, D,i;
    char ch[2000000];

    while(scanf("%d", &n)) {

        if(n==0) break;

        min = 1<<25;
        R=D=-1;
        scanf("%s", &ch);
            for(i=0; i<n; i++){
                if(ch[i]=='.')
                    continue;
                else if(ch[i]=='Z'){
                    min=0;
                    break;
                }
                else if(ch[i]=='R'){
                    R=i;
                    if(R-D<min && D!=-1){
                        min=R-D;
                    }
                }
                else{
                    D=i;
                    if(D-R<min && R!=-1){
                        min=D-R;
                    }
                }
            }
        printf("%d\n", min);
    }

    return 0;
}
