#include<stdio.h>
int main(){
    int isLeapYear;
    scanf("%d", &isLeapYear);
        if(isLeapYear%400==0){
            printf("Leap year");
        }
        else if(isLeapYear%100==0){
            printf("Not A Leap year");
        }
        else if(isLeapYear%4==0){
            printf("Leap year");
        }
    return 0;
}


