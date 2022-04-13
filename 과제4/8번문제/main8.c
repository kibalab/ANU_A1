#include <stdio.h>
#include <cursor.h>

struct rain
{
    COORD pos;
};

int main()
{
    srand(time(NULL));
    struct rain rains[10];

    for(int i = 0; i< 10; i++)
    {
        rains[i].pos.X = rand()%100;
        rains[i].pos.Y = rand()%5;
    }

    int renderDelay = 0;

    while(1)
    {
        if(renderDelay > 100000000){
            clrscr();
            for(int i = 0; i< 10; i++)
            {
                gotoxy(rains[i].pos.X, rains[i].pos.Y);
                printf("#");

                rains[i].pos.Y++;

                if(rains[i].pos.Y > 30) return 0;
            }
        renderDelay = 0;
        }
        renderDelay++;
    }
    
    return 0;
}