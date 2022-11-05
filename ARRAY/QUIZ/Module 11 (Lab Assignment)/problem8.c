#include<stdio.h>

int main(){
    long long int N ;
    int count=0;

    scanf("%d", &N);

    for(int i=0; i<N;  i++){
        for(int j=i+1; j<N; j++){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
