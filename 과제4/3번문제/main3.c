#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int random = rand()%100;
        
    printf("%d\n", random);
    
    int input;
    while(1){
        scanf("%d", &input);
        if(input == 0)
            return 0;

        if(input < random)
        {
            if(random - input > 10)
            {
                printf("10 �̻� �� ū ����\n");
            }
            else{
                printf("10 ������ �� ū ����\n");
            }
        }
        else{
            if(random - input < -10)
            {
                printf("10 �̻� �� ���� ����\n");
            }
            else{
                printf("10 ������ �� ���� ����\n");
            }
        }
    }
}