#include<stdio.h>
int main(){
    int N, K;
    scanf("%d", &N);
    int Roll[N];
    for(int i=0; i<N; i++){
        scanf("%d ", &Roll[i]);
    }
    scanf("%d", &K);


    for(int i=K; i<N; i++){
        printf("%d ", Roll[i]);

    }
    for(int i=0; i<K; i++){
            printf("%d ", Roll[i]);
        }

}
