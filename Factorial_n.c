#include <stdio.h>
int main(){
    int num;
    int factorial=1;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);
    while(num>0){
        factorial = 1;
        for(int i = num; i>0; i-=1){
            factorial = factorial * i;
        }
        printf("FACTORIAL OF %d IS %d\n", num, factorial);
        num-=1;
    }
    return 0;
}