#include<stdio.h>

int print_hash(int n)
{
    int i;
    for (i=1; i<=n; i++)
    {
        printf("#");
    }
    printf("\n");
}
int main()
{
    for(int i=5; i>=1; i--)
        print_hash(i);
    return 0;
}
