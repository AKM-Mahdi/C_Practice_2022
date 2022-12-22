//find the sum of digit and check if that is a prime number
#include<stdio.h>

int sumOfDigit(int a){
    int sum=0;
    while(a>0){
        sum+=(a%10);
        a=a/10;
    }
    return sum;
}

int isPrime(int n){

    for(int i=2; i<n; i++){
        if( n%2==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    if(isPrime(sumOfDigit(n))==1)
        printf("Prime Number");
    else
        printf("Not a prime Number");

    }
