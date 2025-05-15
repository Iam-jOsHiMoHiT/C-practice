#include <stdio.h>
int main()
{
    int x;
    printf("Enter a Number : ");
    scanf("%d", &x);
    if (x > 99 && x < 1000)
    {
        printf("%d is a THREE DIGIT NUMBER.", x);
    }
    else
    {
        printf("%d is a NOT a THREE DIGIT NUMBER.", x);
    }
    return 0;
}