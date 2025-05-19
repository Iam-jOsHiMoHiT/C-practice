#include <stdio.h>
int main()
{
    int x;
    int sum = 0;
    int carry = 0;
    printf("ENTER A NUMBER :");
    scanf("%d", &x);
    while(x>0){
        carry=x%10;
        sum+=carry;
        x=x/10;
    }
    printf("THE SUM OF DIGITS IS %d", sum);

        return 0;
}