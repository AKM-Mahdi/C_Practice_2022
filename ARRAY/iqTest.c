#include<stdio.h>

int main (){
    int n, arr[105];
    int even=0, odd=0, index=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
            if(arr[i]%2==0){
                even++;

            }else{
                odd++;
            }
    }

    if(even=1){
        for(int i=0; i<n; i++){
            if(arr[i]%2==0){
                index=i;
            }
        }
    }else{
        for(int i=0; i<n; i++){
            if(arr[i]%2!=0){
                index=i;
            }
        }
    }

    printf("Index : %d\n", index-1);

}
