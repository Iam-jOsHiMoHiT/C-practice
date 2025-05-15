#include <stdio.h>
int main(){
    int a, r, n;
    printf("ENTER THE FIRST TERM : ");
    scanf("%d",&a);
    printf("ENTER THE COMMAN RATIO : ");
    scanf("%d",&r);
    printf("ENTER THE NUMBER OF TERMS : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i+=1){
        printf("%d ", a);
        a*=r;
    }
    return 0;
}