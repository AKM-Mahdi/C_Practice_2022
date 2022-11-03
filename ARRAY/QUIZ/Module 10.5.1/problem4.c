
#include<stdio.h>

int main(){
    int n, i,j, arr[100], temp ,k;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=1; i<=n; i++){
        for(j=i+1; j<n ;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("enter the value of k :");
    scanf("%d", &k);
    printf("%d ", arr[k]);

}
