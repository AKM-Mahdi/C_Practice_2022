#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    n=3;
    int* ptr;

    ptr=(int*) malloc(n*sizeof(int));
    printf("%p\n", ptr);
    if(ptr==NULL)
    {
        printf("Memory Allocation Failed");
    }
    else
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",(ptr+i));
        }
        for(i=0; i<n; i++)
        {
            printf("%d th= %d\n",i,*(ptr+i));
        }
    }

    n=6;
    ptr= realloc(ptr, n*sizeof(int));
    printf("%p\n", ptr);
    if(ptr==NULL)
    {
        printf("Memory Allocation Failed");
    }
    else
    {
        for(i=3; i<n; i++)
        {
            scanf("%d",(ptr+i));
        }
        for(i=0; i<n; i++)
        {
            printf("%d th= %d\n",i,*(ptr+i));
        }
    }
    free(ptr);
    return 0;

}

