#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetMax(int array[], int length)
{
    int max = array[0];
    for(int i = 0; i < length; i++)
    {
        if(max < array[i]) max = array[i];
    }

    return max;
}

int main()
{        
    int count;
    printf("Input count : ");
    scanf("%d", &count);
    printf("\n");
    
    int array[count]; // gcc는 VLA를 컴파일 해준다
    for(int i = 0; i < count; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Max input number is %d\n", GetMax(array, count));
    scanf("%d", &count); // 대기
}