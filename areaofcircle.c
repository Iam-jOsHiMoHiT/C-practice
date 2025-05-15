#include<stdio.h>
int main(){
    float radius,pi,area;   
    printf("Enter a number: ");
    scanf("%f", &radius);
    pi=3.14;
    area=pi*radius*radius;
    printf("area of circle is : %f" , area);
    return 0;
}