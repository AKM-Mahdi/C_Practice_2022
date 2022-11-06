#include<stdio.h>
#include<string.h>
int main(){
    char sentence[100];
    fgets(sentence, sizeof(sentence), stdin);

    if(sentence[0]>='a' && sentence[0]<='z'){
        sentence[0]-=32;
    }

    puts(sentence);


}
