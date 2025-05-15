#include<stdio.h>
int main(){
    int PER;
    printf("Enter your PERCENTAGE : ");
    scanf("%d", &PER);
    if(PER>90){
        printf("EXCELLENT");
    }
    else if(PER>80 ){
        printf("VERY GOOD");
    }
    else if(PER>70 ){
        printf("GOOD");
    }
    else if(PER>60){
        printf("CAN DO BETTER");
    }
    else if(PER>50 ){
        printf("AVERAGE");
    }
    else if(PER> 40 ){
        printf("BELOW AVERAGE");
    }
    else 
        printf("FAIL");
    
    return 0;
}
