#include<stdio.h>
int main(){

    int i, j, x,y;
    int arr[5][5];

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            scanf("%d", &arr[i][j]);

            if(arr[i][j]==1){
                x=i;
                y=j;
                }
            }
        }

        int rowChange, colChange, ans;

        if(x>2){
            rowChange=x-2;
        }else{
            rowChange=2-x;
        }

        if(y>2){
            colChange=y-2;
        }else{
            colChange=2-y;
        }
    ans=rowChange+colChange;
    printf("%d",ans);



    return 0;
}
