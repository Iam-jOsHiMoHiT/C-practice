#include <stdio.h>
int main()
{
    int num;
    int reverse = 0;
    int digit = 0;
    printf("ENTER A NUMBER :");
    scanf("%d", &num);
    while(num>0){
        digit=num%10;
        reverse= (reverse*10 )+ digit;
        num=num/10;
    }
    printf("THE REVERSE OF NUMBER  IS %d", reverse);

        return 0;
}