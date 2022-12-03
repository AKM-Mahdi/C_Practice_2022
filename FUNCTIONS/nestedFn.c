#include<stdio.h>
#include<math.h>

float f(float x, float y);
float absolute(float x);

int main(){
    int x,y;
    float result;
    scanf("%d %d", &x,&y);

    result=f(x,y);
    printf("The result is : %f",result);

}

float f(float x, float y){
    int tempAns=absolute(x-3)+(y+4)*(y+4);

    return sqrt(tempAns);
}
float absolute(float x){
    if(x>=0){
        return x;
    }else{
        return (-1)*x;
    }
}
