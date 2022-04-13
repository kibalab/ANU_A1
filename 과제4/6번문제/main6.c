#include <stdio.h>

int main()
{
    int addition = 0;
    for(int i = 1; i <= 200; i++)
    {
        if(i%2 == 1)
            addition += i;
    }
    printf("%d", addition);
}