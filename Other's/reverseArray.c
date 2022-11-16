

#include<stdio.h>
int main(){
        int n,m, i, arr[n];
        printf("enter the size of array :");
        scanf("%d", &n);

        for(i=0; i<n; i++){
            printf("Index of %d :",i);
            scanf("%d", &arr[i]);
        }

        for(m=n-1; m>=0; m--){
            printf("%d \n",arr[m]);
        }
    return 0;


}


