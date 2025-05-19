#include <stdio.h>
int main(){
    int first_digit = 0;
    int second_digit = 0;    
    int third_digit = 0;
    printf("ARMSTRONG NUMBERS BETWEEN 1 TO 1000 : \n\n");
    for(int i=1;i<1000;i+=1){
        int x=i;
        first_digit = x%10;
        x=x/10;
        second_digit = x%10;
        x=x/10;
        third_digit = x%10;
        int sum_of_cubes = (first_digit*first_digit*first_digit) + (second_digit*second_digit*second_digit)+
        (third_digit*third_digit*third_digit);
        if(sum_of_cubes == i ){
            printf("%d\n",i);

        }

    }
    return 0;
}