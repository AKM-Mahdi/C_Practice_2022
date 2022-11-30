#include<stdio.h>

int gcdFind(int a,int b){
    int i;
    for(i=a; i>=1; i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }

}
int main(){
    int a,b,i, ans=0;
    scanf("%d %d", &a,&b);
    ans = gcdFind(a,b);
    printf("%d", ans);
    return 0;
}
