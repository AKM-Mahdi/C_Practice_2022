#include<stdio.h>

struct student{
    int id;
    double weight;
};

int main(){
    struct student s[3];

    for(int i=0; i<3; i++){
        scanf("%d %d", &s[i].id, &s[i].weight);
    }
    for(int i=0; i<3; i++){
        printf("ID= %d and Roll= %d\n", s[i].id, s[i].weight);
    }
}
