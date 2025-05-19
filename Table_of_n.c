#include <stdio.h>
int main()
{
    int i, n;
    printf("ENTER THE NUMBER WHOSE TABLE IS TO BE PRINTED : \n");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i += 1)
    {
        printf("%d\n", n * i);
    }
}