#include <stdio.h>
int main(){
    int x;
    int y;
    printf("ENTER BASE NUMBER : ");
    scanf("%d",&x);
    int power= 1;
    printf("ENTER POWER : ");
    scanf("%d",&y);
    for(int i = 1; i<=y; i+=1){
        power=power*x;
    }
    printf("%d raised to the power %d is : %d",x,y,power);

    return 0;
}