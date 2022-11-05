
#include<stdio.h>

int main(){
    int N ;
    scanf("%d", &N);
    int Max=0;
    int Marks[N];
    for(int i=0; i<N; i++){
        scanf("%d", &Marks[i]);
        if(Max<Marks[i]){
            Max=Marks[i];
        }
    }

    for( int i=0; i<N; i++){
        printf("%d ",Max-Marks[i]);
    }
    return 0;

}
