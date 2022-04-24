#include <stdio.h>
#define iseven(a) (a+1)%2

int main()
{
    int input;
    scanf("%d", &input);
    printf(iseven(input) ? "Even number" : "Odd number");

    scanf("%d", &input);
}