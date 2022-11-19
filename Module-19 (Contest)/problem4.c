#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        int N;
        char ch;
        scanf("%d%c",&N,&ch);
        char arr[N+2];
        int countone=0;
        int counttwo=0;
        fgets(arr, sizeof(arr), stdin);
        int len=strlen(arr)-1;
        for(int i=0; i<len; i++)
        {
            if(arr[i]=='1' && arr[i+1]=='0')
            {
                countone++;
            }
            if(arr[i]=='0' && arr[i+1]=='1')
            {
                counttwo++;
            }
        }

        printf("%d\n",countone+counttwo);
    }

    return 0;
}
