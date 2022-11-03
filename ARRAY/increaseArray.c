/* https://cses.fi/problemset/task/1094#:~:text=CSES%20%2D%20Increasing%20Array&text=
You%20are%20given%20an%20array,of%20any%20element%20by%20one.*/
#include<stdio.h>
int main(){
    int n, i, arr[100003];
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int moves=0;
    for(i=1; i<n; i++){
        if(arr[i-1]>arr[i]){
            moves += arr[i-1]-arr[i];
            arr[i]=arr[i-1];

        }
    }
    printf("%d", moves);
}
