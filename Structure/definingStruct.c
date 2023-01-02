#include<stdio.h>

struct student
{
    int id;
    char name[50];
    float weight;
};

int main()
{
    struct student s ={101,"Asif",75.6};

    printf("Id= %d \nWeight= %f\nName= %s", s.id, s.weight, s.name);
    return 0;
}
