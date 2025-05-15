#include <stdio.h>
int main()
{
    int a, b, c;
    printf("ENTER FIRST NUMBER: \n");
    scanf("%d", &a);
    printf("ENTER SECOND NUMBER: \n");
    scanf("%d", &b);
    printf("ENTER THIRD NUMBER: \n");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("\n%d is LARGEST number.", a);
    }
    if (b > a && b > c)
    {
        printf("\n%d is LARGEST number.", b);
    }
    else
    {
        printf("\n%d is LARGEST number.", c);
    }
    return 0;
}