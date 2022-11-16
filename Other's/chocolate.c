#include<stdio.h>
int main(){
    int n, chocolate, packet;

    printf("Enter the number of chocolate you have :");
    scanf("%d",&n);
    chocolate=n;
    packet=n;


    for ( packet; packet>=4; packet){
        chocolate+= packet/4;
        packet= (packet/4)+ (packet%4);
    }
    printf("Total no of chocolate %d :", chocolate);

}
