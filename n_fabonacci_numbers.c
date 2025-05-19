#include <stdio.h>
int main()
{
    int num;
    int sum = 1;
    int a = 1, b = 1;
    printf("ENTER THE NUMBER OF TERMS : ");
    scanf("%d", &num);
    printf("1st TERM OF FABONACCI SERIES IS %d.\n", sum);
    printf("2nd TERM OF FABONACCI SERIES IS %d.\n", sum);


    for (int i = 1; i < num - 1; i += 1)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("%dth TERM OF FABONACCI SERIES IS %d.\n", i+2, sum);
    }
    return 0;
}