#include<stdio.h>

void func(int* a){
        *a=10;
}

int main(){
    int a=5;
    func(&a);
    printf("%d \n",a);
    return 0;
}
