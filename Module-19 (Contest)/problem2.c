#include<stdio.h>
#include<string.h>
int main(){
    char str[22];
    fgets(str, sizeof(str), stdin);
    int len=strlen(str)-1;

    int x, y;
    scanf("%d %d", &x, &y);
    int sum=0;
    for(int i=0; i<len; i++){
        if(str[i]=='+'){
            sum+=x+y;
        }else if(str[i]=='*'){
            sum+=x*y;
        }
    }
    printf("%d", sum);


    return 0;
}
