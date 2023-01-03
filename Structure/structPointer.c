#include<stdio.h>

struct student{
    int id;
    double weight;
};
int main(){

    struct student s={.id=101, .weight=78.5};
    struct student* sp;
    sp=&s;

    printf("ID= %d and Weight= %lf", sp->id, sp->weight );
    return 0;
}
