#include<stdio.h>

int isPrime(int x){

    if(x==1){
        return 0;
    }else if(x==2){
        return 1;
    }else{
        for(int i=2; i<x; i++){
            if(x%i==0){
                return 0;
            }
        }
    }
    return 1;

}

int main(){

int x, i;
scanf("%d", &x);
i= isPrime(x);

if(i==0){
    printf("Not a Prime No");
}else{
    printf("Prime No");
}

}
