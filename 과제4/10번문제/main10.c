#include <stdio.h>
#include <cursor.h>

int main()
{
    COORD point = {0, 0};
    int renderDelay = 0;
    
    while(point.X <= 80)
    {
        if(renderDelay > 100000000){
            point.X += 3;
            point.Y ++;

            gotoxy(point.X, point.Y);
            printf("#");
            renderDelay = 0;
        }
        renderDelay++;
    }

    //wait
    printf("\n\n\n");
    int i;
    scanf("%d", &i);

    return 0;
}