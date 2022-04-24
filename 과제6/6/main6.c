#include <stdio.h>
#define toSquareMeter(a) a*3.3

int main()
{
    int input;
    scanf("%d", &input);
    printf("%.0f", toSquareMeter(input));

    scanf("%d", &input);
}