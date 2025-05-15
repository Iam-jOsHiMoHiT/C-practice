#include <stdio.h>
int main()
{
    float len, bre, area, peri;
    printf("Enter the length of Rectangle : ");
    scanf("%f", &len);
    printf("Enter the breadth of Rectangle : ");
    scanf("%f", &bre);
    area = len * bre;
    peri = 2 * (len + bre);
    printf("AREA = %f\n", area);
    printf("PERIMETER = %f\n", peri);
    if (area > peri)
    {
        printf("The AREA of Rectangle is greater than the PERIMETER.");
    }
    else
    {
        printf("The PERIMETER of Rectangle is greater than the AREA.");
    }
    return 0;
}