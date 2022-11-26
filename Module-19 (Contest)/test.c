 /* print the the square of this serries... 1-2+3-4....+10  */

#include <stdio.h>
int main()
{
    int n, i,ans=0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        if(i%2==0){
            ans=ans-pow(i,2);
        }else{
            ans=anspow(i,2);
        }
    }
    printf("%d", ans);

    return 0;
}
