#include <stdio.h>
int main()
{
    int num;
    int sum = 1;
    int a = 1, b = 1;
    printf("ENTER THE NUMBER OF TERMS : ");
    scanf("%d", &num);

    for (int i = 1; i < num - 1; i += 1)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("%dth TERM OF FABONACCI SERIES IS %d.", num, sum);
    return 0;
}