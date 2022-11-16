//total weight of bus

#include<stdio.h>
int main(){
    int n, w, i=0, sum=0;
    printf("Enter number of people in a bus : ");
    scanf("%d", &n);
    for(i; i<n; i++){
        scanf("%d", &w);
        sum=sum+w;
    }
    printf("Total weight of bus %d: ", sum);
    return 0;
}
