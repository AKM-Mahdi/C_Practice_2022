//print sum of n number from series 1+2+3+4+....+n
#include<stdio.h>

int main(){
    int n=5, sum, i;

    sum=0;
    for(i=0; i<=n; i++){
        sum=sum+i;
    }
   printf("%d", sum);

}
