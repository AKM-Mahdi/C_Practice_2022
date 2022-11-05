#include<stdio.h>
int main(){
    int T, percent;
    scanf("%d", &T);
    int X[T];

    for(int i=0; i<T; i++){
        scanf("%d%c",&X[i], &percent);

        int totalTime=0;
        if(X[i]<=60){
            totalTime=(60-X[i])+(20*2)+(20*3);

            }
         else if(X[i]>60 && X[i]<=80){
             totalTime=(80-X[i])*2+(20*3);
         }
         else{
            totalTime=(100-X[i])*3;
         }
         printf("%d minutes\n",totalTime);

    }


    return 0;

}
