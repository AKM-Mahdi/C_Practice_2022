#include<stdio.h>

int gcd(int m, int n)
{
    int i;
    for(i=m;i>=1; i--)
    {
        if(m%i==0 && n%i==0)
        {
            return i;
        }
    }
}
int lcm(int m,int n){
    return (m*n)/gcd(m,n);
}

int main()
{
    int i, m, n,gcdR, lcmR;
    scanf("%d %d",&m,&n);
    gcdR=gcd(m,n);
    lcmR=lcm(m,n);

    printf("The gcd is :%d\n",gcdR );
    printf("The lcm is :%d\n",lcmR );



}
