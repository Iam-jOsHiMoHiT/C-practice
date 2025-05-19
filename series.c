#include <stdio.h>
int main()
{
    int term;
    int orig_term;
    int sum = 0;
    printf("ENTER THE NUMBER OF TERMS FOR THIS SERIES (1-2+3-4+5-6+7.........): ");
    scanf("%d", &term);
    orig_term = term;

    for (int i = 1; i <= term; i += 1)
    {
        if (i % 2 == 0)
        {
            sum = sum - i;
        }
        else if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("THE SUM OF SERIES (1-2+3-4+5 ........till %d terms) IS %d :", orig_term, sum);
    return 0;
}