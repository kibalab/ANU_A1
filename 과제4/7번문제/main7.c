#include <stdio.h>

int main()
{
    int result = 0;
    for(int i = 1; i <= 20; i+=2)
    {
        result += i * ( i + 1 );
    }
    printf("%d", result);
}