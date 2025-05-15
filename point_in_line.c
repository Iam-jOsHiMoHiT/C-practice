#include <stdio.h>
int main()
{
    float x1, x2, x3, y1, y2, y3;
    printf("ENTER COORDINATE(x1) : ");
    scanf("%f", &x1);
    printf("ENTER COORDINATE(y1) : ");
    scanf("%f", &y1);
    printf("ENTER COORDINATE(x2) : ");
    scanf("%f", &x2);
    printf("ENTER COORDINATE(y2) : ");
    scanf("%f", &y2);
    printf("ENTER COORDINATE(x3) : ");
    scanf("%f", &x3);
    printf("ENTER COORDINATE(y3) : ");
    scanf("%f", &y3);

    float m1, m2;
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);

    if (m1 == m2)
        printf("ALL THREE POINTS LIE ON ONE STRAIGHT LINE");

    else
        printf("ALL THREE POINTS DO NOT LIE ON ONE STRAIGHT LINE");
    return 0;
}