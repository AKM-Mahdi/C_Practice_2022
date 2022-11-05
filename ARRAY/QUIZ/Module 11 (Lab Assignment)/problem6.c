
#include<stdio.h>
#include <math.h>
int main(){
    int T, N;
    scanf("%d", &T);
    long long int number;

    for(int i=0; i<T; i++){
        scanf("%d", &number);

        int squareRoot = sqrt(number);
        int flag=1;
        if(number==1){
                    flag=0;
                }
        for(int i=2; i<=squareRoot; i++){

                if(number%i==0){
                    flag=0;
                }
        }
        if(flag==0){
            printf("No\n");
        }else{
            printf("Yes\n");
        }
    }


    return 0;
}





