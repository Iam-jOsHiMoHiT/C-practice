#include <stdio.h>
int main(){
    int integer;
    printf("Enter any integer : ");
    scanf("%d", &integer);
    if(integer>=0){
        printf("Absolute Integer is %d", integer);
    }
    else{
        integer=integer*-1;
        printf("Absolute Integer is %d", integer);
    }
    return 0;
}