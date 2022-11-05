
#include<stdio.h>

int main( ){
    int N,K, Run, count=0;
    scanf("%d %d",&N, &K);


    for(int i=0; i<N ; i++){
        scanf("%d", &Run);
        if(Run<K){
            count++;
        }

    }
    printf("%d", count);


    return 0;
}
