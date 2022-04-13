#include <stdio.h>
#include <cursor.h>

int main()
{
    COORD border = {5, 2};

    for(int i = 1; i< 9; i++)
    {
        for(int j = 1; j<= 9; j++)
        {
            gotoxy(((i - (i >= 5 ? 4 : 0) - 1) * 15) + border.X, j + (i >= 5 ? 10 : 0) - 1 + border.Y);
            printf("%d * %d = %2d", i+1, j, (i+1) * j);
        }
    }

    //wait
    printf("\n\n\n");
    int i;
    scanf("%d", &i);

    return 0;
}