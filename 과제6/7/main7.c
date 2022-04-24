#include <stdio.h>
#define toF(c) 1.8*c+32

int main()
{
    float input;
    scanf("%f", &input);
    printf("%.0f", toF(input));

    scanf("%f", &input);
}