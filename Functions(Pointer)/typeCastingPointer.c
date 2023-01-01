#include<stdio.h>
int main()
{
    int a=7;
    double b=5.5;
    int* pa;
    double* pb;

    pa= &a;
    pb= (double*)pa;

    printf(" a : %d and b : %lf\n", a,b);
    printf(" pointer of a : %p and pointer of b : %p", pa,pb);
    return 0;
}
