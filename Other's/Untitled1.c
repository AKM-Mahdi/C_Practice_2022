#include <stdio.h>

int main(){
        int n,i,a,j;
        printf("enter no of problems :");
        scanf("%d", &n);
        int total=0;

        for(i=0; i<n; i++){
            counter=0;
            for(j=0; j<n; j++){
                scanf("%d", &a);
                counter=counter+a;
            }
            if(a+b+c>=2){
                total++;
            }
        }
        printf("%d", total);


    return 0;


}

