#include<stdio.h>
int main(){
    int sum=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<=i ; j++){
            sum=i*(i+1)/2;
            printf("%d ",(j+sum+1));
        }
        printf("\n");
    }
}
