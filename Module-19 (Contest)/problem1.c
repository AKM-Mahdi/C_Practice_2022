#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    if(N%3==0){
        printf("%d", N/3);
    }else{
        printf("-1");
    }

    return 0;
}
