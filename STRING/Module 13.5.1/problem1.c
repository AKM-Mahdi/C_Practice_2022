#include<stdio.h>
int main(){
    int i;
    char s[100];
    fgets(s, sizeof(s), stdin);



    for(i=0; s[i]!='\0'; i++){
        printf("%c\n", s[i]);
    }
    return 0;
}

