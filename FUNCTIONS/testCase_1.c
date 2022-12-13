#include<stdio.h>

void findArea()
{
    int r;
    float area;
    scanf("%d", &r);
    area=3.1416*r*r;
    printf("%f\n",area);
}
int main()
{
    int i, n;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf ("Test case no : %d\n",i+1);
        findArea();
    }
    return 0;
}
