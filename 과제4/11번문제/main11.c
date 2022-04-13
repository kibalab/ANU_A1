#include <stdio.h>
#include <cursor.h>

int main()
{    
    for(int i = 1; i<= 10; i++)
    {
        for(int j = i; 10 > j; j++)
        {
            printf(" ");
        }
        for(int j = 0; j < i*2-1; j++)
        {
            printf("%c", 'a' + j);
        }
        printf("\n");
    }

    //wait
    printf("\n\n\n");
    int i;
    scanf("%d", &i);

    return 0;
}