#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetSumStep(int From, int To, int Step)
{
    int sum = 0;
    for(int i = From; i < To; i+=Step)
    {
        sum += i;
    }

    return sum;
}

int main()
{        
    int from, to, step;
    printf("From (Integer) : ");
    scanf("%d", &from);
    printf("\n");
    printf("To (Integer) : ");
    scanf("%d", &to);
    printf("\n");
    printf("Step (Integer) : ");
    scanf("%d", &step);
    printf("\n");

    printf("The total number of steps is %d\n", GetSumStep(from, to, step));
    scanf("%d", &step); // 대기
}