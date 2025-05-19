#include <stdio.h>
int main()
{
    int ASCII = 65;
    printf("ASCII VALUE : ALPHABET\n");
    while(ASCII<91){
        char CHAR = ASCII;
        printf("%d : %c\n", ASCII, CHAR);
        ASCII+=1;
    }
    return 0;
}