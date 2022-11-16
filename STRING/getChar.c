#include<stdio.h>
int main (){
    char ch1, ch2;

    ch1=getchar();
    getchar();
    ch2=getchar();

    //scanf("%c %c",&ch1,&ch2); //separate input with "space"
    //scanf("%c,%c",&ch1,&ch2); //separate input with "comma"

    printf("%c and %c",ch1, ch2);
}
