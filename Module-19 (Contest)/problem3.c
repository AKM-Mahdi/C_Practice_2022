#include<stdio.h>
int main(){
    int N, M, i, j, value=0;
    scanf("%d %d", &N, &M);

    int arr[N][M];

    for(i=0; i<N ; i++){
        for( j=0; j<M; j++){
            scanf("%d", &arr[i][j]);
             value=  arr[i][j];

            if(value==i+1 && value==j+1){
                arr[i][j]+=3;
            }else if(value==i+1){
                arr[i][j]+=2;
            }else if(value==j+1){
                arr[i][j]+=1;
            }
        }
    }
    for( i=0; i<N ; i++){
        for( j=0; j<M; j++){

            printf("%d ", arr[i][j]);
        }
            if(i==N){
                break;
            }
            printf("\n");
    }

    return 0;


}
