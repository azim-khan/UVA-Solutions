#include<stdio.h>

int main(){
    int T, i, j, k, N, P, Q, SUM=0, NUM, W[31];
    scanf("%d", &T);

    for(i=0; i<T; i++){
        scanf("%d%d%d", &N, &P, &Q);

        for(j=0; j<N; j++){
            scanf("%d", &W[j]);
        }

        if(P>N) P=N;

        NUM=P;
        SUM=0;
        for(k=0; k<P; k++){
            SUM=SUM+W[k];
            if(SUM>Q){
                NUM=k;
                break;
            }
        }

        printf("Case %d: %d\n", i+1, NUM);
    }
    return 0;
}
