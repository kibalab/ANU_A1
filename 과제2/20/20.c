#include <stdio.h>

// 사각형의 폭 width를 25로 초기화하고 높이 height를 12로 선언한 후 두 변수값을 곱해 사각형의 면적 area값을 계산하라. 
// 정수값을 출력하기 위해 printf 문의 %d 서식을 사용한다.

int mul(int a, int b);

int main()
{
    int width = 25;
    int height = 12;

    printf("area : %d", mul(width, height));
    
    return 0;
}

int mul(int a, int b){ return a * b; }