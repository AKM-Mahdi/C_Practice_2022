#include<stdio.h>
int main()
{
    int N, max=0, i,j, sum=0;
    scanf("%d", &N);
    int arr[N];
    for(i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<N-1; i++)
    {
        for(j=i+1; j<N; j++)
        {
            sum=arr[i]+arr[j];
            if(sum%2==0 && sum>max){
                max=sum;
            }
        }

    }
    printf("%d", max);
    return 0;
}
