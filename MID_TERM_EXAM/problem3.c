#include<stdio.h>
int main(){
    int n=15;
    int arr[n], temp=1;
    for (int i=0; i<n; i++) {
        arr[i] =pow(2,i);
    }

    for (int i=0; i<n; i++) {
	//Write Code Here
        printf("%d ", arr[i]);
    }
}
