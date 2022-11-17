#include<stdio.h>
int main ()
{
    int n, sum=0;
    printf("Enter the digits you want to print :");
    scanf("%d", &n);
    printf("The odd numbers are :");
    for(int i=0; i<10; i++)
    {
        printf("%d ",2*i+1);
        sum+=2*i+1;
    }
    printf("\nThe Sum of odd Natural Number upto 10 terms : %d",sum);

}
