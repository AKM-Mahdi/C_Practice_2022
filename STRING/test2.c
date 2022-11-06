#include<stdio.h>
#include<string.h>
int main(){
    char sentence[100];
    fgets(sentence, sizeof(sentence), stdin);

    int length=strlen(sentence)-1;
    if(length>10){
        printf("%c%d%c",sentence[0],length-2,sentence[length-1]);
    }else{
        puts(sentence);
    }




}
