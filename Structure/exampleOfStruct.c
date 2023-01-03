#include<stdio.h>
#include<math.h>

struct point{
    int x;
    int y;
};

double distance(struct point p1, struct point p2){
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}
int main(){

    struct point p1,p2;
    scanf("%d %d",&p1.x,&p1.y);
    scanf("%d %d",&p2.x,&p2.y);

    printf("The distance of the points= %lf", distance(p1,p2));
    return 0;
}

