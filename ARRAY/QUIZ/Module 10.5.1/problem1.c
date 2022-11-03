#include<stdio.h>

int main(){
    int n, i;
    int arr[100]={0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Index of %d =%d\n",i, arr[i]);

    }

}
