#include <stdio.h>
int main()
{
    int a, d, n;
    printf("ENTER THE FIRST TERM : ");
    scanf("%d", &a);
    printf("ENTER THE COMMAN DIFFERENCE : ");
    scanf("%d", &d);
    printf("ENTER THE NUMBER OF TERMS : ");
    scanf("%d", &n);

    for (int i = a; i <= a + (n - 1) * d; i += d)
    {
        printf("%d\n", i);
    }
    return 0;
}