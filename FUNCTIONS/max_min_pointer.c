#include<stdio.h>
void find_max_min(int n, int nums[], int* p, int *q){
    *p=nums[0];
    *q=nums[0];

    for(int i=0; i<n; i++){

        if(nums[i]>*p){
            *p=nums[i];
        }
        if(nums[i]<*q){
            *q=nums[i];
        }
    }
}

int main(){
    int arr[]={12,6,9,3,4,21,66};
    int n=7;
    int maxx, minn;

    find_max_min(n,arr, &maxx, &minn);
    printf("Max : %d and Min : %d", maxx, minn);
    return 0;
}
