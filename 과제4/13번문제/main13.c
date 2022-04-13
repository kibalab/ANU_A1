#include <stdio.h>
#include <cursor.h>

int main()
{    
    for (int i = 1; i<=75; i++)
    {
        gotoxy(i, 10);
        
        short frame = i % 5;

        switch(frame)
        {
            case 1 :
                puts(" .oooo*");
                break;
            case 2 :
                puts(" ,oooO*");
                break;
            case 3 :
                puts(" .ooOo*");
                break;
            case 4 :
                puts(" .oOoo*");
                break;
            case 0 :
                puts("_,Oooo*");
                break;
        }

        delay(200);
    }

    //wait
    printf("\n\n\n");
    int i;
    scanf("%d", &i);

    return 0;
}