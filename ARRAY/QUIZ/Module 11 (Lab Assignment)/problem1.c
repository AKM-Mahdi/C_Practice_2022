#include<stdio.h>

int main( ){
    int T;

    scanf("%d", &T);

    for(int i=0; i<T; i++){
        long long arr[3],S;
        scanf("%d", &S );
        long long int totalSum=0;

        for(int i=0; i<3; i++ ){
        scanf("%d",&arr[i]);
        totalSum+=arr[i];
    }

        printf("%d\n",S-totalSum);
    }

    return 0;
}
