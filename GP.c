#include <stdio.h>
int main(){
    float a, r, n;
    printf("ENTER THE FIRST TERM : ");
    scanf("%f",&a);
    printf("ENTER THE COMMAN RATIO : ");
    scanf("%f",&r);
    printf("ENTER THE NUMBER OF TERMS : ");
    scanf("%f",&n);
    for(int i=1; i<=n; i+=1){
        printf("%f ", a);
        a*=r;
    }
    return 0;
}
