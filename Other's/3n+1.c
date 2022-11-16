#include<stdio.h>
int main(){
    int i;
    printf("enter a number :");
    scanf("%d", &i);

    while(i>1){
        printf("%d\n",i);
        if(i%2==0){
            i=i/2;
        }else{
            i=3*i+1;
        }

    }
     printf("%d\n",i);


    }
