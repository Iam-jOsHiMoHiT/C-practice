#include <stdio.h>
int main()
{
    int x;
    int count = 0;
    printf("ENTER A NUMBER :");
    scanf("%d", &x);
    while(x>0){
        x=x/10;
        count+=1;
    }
    printf("THE NUMBER OF DIGITS : %d", count);

        return 0;
}