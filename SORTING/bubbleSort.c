#include<stdio.h>
int main(){
    int arr[8]={8,7,6,5,4,3,2,1}, temp;

    for(int i=0; i<8; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(int i=0; i<3; i++){
        for(int i=0; i<8; i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    }

    for(int i=0; i<8; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
