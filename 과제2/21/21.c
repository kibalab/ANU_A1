#include <stdio.h>

// 300이하의 값을 저장하는 height와 1000만 이하를 저장하는 salary, 
// 소수점을 두 자릿수까지 저장하는 weight 변수를 각각 선언하되 가급적 메모리를 적게 소모하는 타입을 선택하라.

int main()
{
    short height = 300;
    int salary = 10000000;
    float weight = 0.01;

    printf("height : %d\nsalary : %d\nheight : %.2f", height, salary, weight);
    
    return 0;
}