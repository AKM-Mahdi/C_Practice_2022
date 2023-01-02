#include<stdio.h>

struct student{
    int id;
    char name[50];
};

int main(){
    struct student s1={.id=101, .name="Asif"}; //Designated Initialization
    struct student s2={.id=102, .name="Rahim"};


    printf("Student 1\n");
    printf("Id= %d\nName= %s\n", s1.id, s1.name);
    printf("\n");
    printf("Student 2\n");
    printf("Id= %d\nName= %s", s2.id, s2.name);
}

