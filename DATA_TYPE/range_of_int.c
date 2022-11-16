#include<stdio.h>
int main(){
    int result=sizeof(int)*8;
    int finalResult=pow(2,result);
    printf("%d", finalResult);

    return 0;
}
