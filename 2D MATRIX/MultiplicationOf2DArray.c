#include<stdio.h>
int main()
{
    int arrOne[3][3],arrtwo[3][3],i, j, ans[3][3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
        {
            scanf("%d", &arrOne[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
        {
            scanf("%d", &arrtwo[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
        {
            ans[i][j]=arrOne[i][0]* arrtwo[0][j] +arrOne[i][1]* arrtwo[1][j] +arrOne[i][2]* arrtwo[2][j];
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }


}
