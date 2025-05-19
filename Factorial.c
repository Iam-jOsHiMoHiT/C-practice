#include<stdio.h>
int main(){
    int num;
    int factorial = 1;
    int orig_num;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);
    orig_num = num;
    while(num>0){
        factorial = factorial * num;
        num-=1;
    
    }
    printf("THE FACTORIAL OF %d IS %d", orig_num, factorial);
    return 0;
}