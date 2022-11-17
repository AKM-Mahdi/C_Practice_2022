#include<stdio.h>
int main(){
    int M, N;
    scanf("%d %d",&M, &N );
    int arr[M][N];
    int sum[M][N];
    for(int row=0; row<M; row++){
            for(int col=0; col<N; col++){
                sum[row][col]=0;
            }
        }
    for(int i=0; i<2; i++){
        for(int row=0; row<M; row++){
            for(int col=0; col<N; col++){
                scanf("%d", &arr[row][col]);
                sum[row][col]+=arr[row][col];

            }
        }
    }
    for(int row=0; row<M; row++){
            for(int col=0; col<N; col++){
                printf("%d ",sum[row][col]);
            }
            printf("\n");
        }

}
