#include <stdio.h>
#include <cursor.h>

int main()
{    
    for(int i = 1; i<= 5; i++)
    {
        printf("|");
        for(int j = 0; j < i * 7; j++)
        {
            printf("-");
        }
    }
    printf("|");

    //wait
    printf("\n\n\n");
    int i;
    scanf("%d", &i);

    return 0;
}