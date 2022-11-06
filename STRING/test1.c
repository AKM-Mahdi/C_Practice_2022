#include<stdio.h>
int main(){
    char name[]= "A K M Mahdi";
    name[11]=' ';
    name[12]='H';
    name[13]='\0';
    printf("%s", name);



    return 0;
}
