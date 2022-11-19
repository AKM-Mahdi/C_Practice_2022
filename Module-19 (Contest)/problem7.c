#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    char ch;
    char str[22];
    scanf("%d%c", &T, &ch);
    for(int j=0; j<T; j++)
    {

        fgets(str,sizeof(str), stdin);
        int len=strlen(str)-1;

        int flag=1;
        for(int i=0; i<len/2; i++)
            if(str[i]!=str[len-i-1])
                flag=0;

        if(flag==0)
            printf("Case #1: Not Palindrome\n");
        else
        {
            if(len<=7)
            {  printf("Case #3: ");
               for(int k=0; k<len; k++){
                printf("%c", str[k]);
               }
               printf("\n");
            }
            else
            {
                printf("Case #2: %c%d%c\n", str[0],len-2,str[len-1]);
            }

        }
    }

}
