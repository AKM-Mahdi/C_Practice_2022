#include<stdio.h>
int main(){

        char sentence[100];
        fgets(sentence, sizeof(sentence),stdin);
        int counter=0;
        int i=0;

        while(sentence[i]!='\0'){
            if(sentence[i]=='a' || sentence[i]=='e' || sentence[i]=='i' || sentence[i]=='o' || sentence[i]=='u'){
                counter++;
            }
            else if(sentence[i]=='A' || sentence[i]=='E' || sentence[i]=='I' || sentence[i]=='O' || sentence[i]=='U'){
                counter++;
            }

            i++;
        }



        printf("No of vowels %d",counter);

    return 0;
}
