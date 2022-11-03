
#include<stdio.h>

int main(){
    int n, i, arr[100];
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int totalOdd;

    for(i=0; i<n; i++){
        if(arr[i]%2!=0){
            totalOdd+=arr[i];
        }
    }
    if(totalOdd%2==0){
        printf("Yes");
    }else{
        printf("No");
    }

}
