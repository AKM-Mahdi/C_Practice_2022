#include<stdio.h>

    void func(int a, int b, int* p , int* q){
        if(a>b){
            *p= a;
            *q=b;
        }else{
            *p= b;
            *q=a;
        }
    }
int main(){
    int a=50,b=10;
    int large, small;
    func (a,b, &large, &small);
    printf("Large : %d and Small: %d", large, small);
    return 0;
}
