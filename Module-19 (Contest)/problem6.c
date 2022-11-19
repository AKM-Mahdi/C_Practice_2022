#include<stdio.h>
int main()
{
    int N, start=0, end=0, len, max=0;
    char ch;

    scanf("%d%c",&N, &ch);
    char arr[N+2];
    fgets(arr,sizeof(arr),stdin);

    for(int i=0; i<N; i++)
    {
        if(arr[start]==arr[i+1])
        {
            end=i+1;
        }else{
            len=end-start+1;
            if(len>max){
                max=len;
            }
            start=i+1;
            end=i+1;
        }
    }
    printf("%d", max);

    return 0;
}
