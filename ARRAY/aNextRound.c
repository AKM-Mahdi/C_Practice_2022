/*Next Round
https://codeforces.com/problemset/problem/158/A
0 */

#include<stdio.h>
int main(){
    int n, k, i;
    int arr[55];
    scanf("%d", &n);
    scanf("%d", &k);

    for(i=1; i<=n;i++){
        scanf("%d", &arr[i]);
    }

    int total=0;
    for(i=1; i<=n; i++){
        if(arr[i]>=arr[k] && arr[i]>0){
            total++;
        }
    }
    printf("Total : %d", total);

}
