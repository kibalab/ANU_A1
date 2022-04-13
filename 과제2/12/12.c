#include <stdio.h>

// 다음 코드는 두 가지 에러가 발생한다. 무엇이 잘못되었는지 설명하라.

/*
    [보기]

int main()
{
    Printf("First\n");
    return 0
}
*/

/*  [정답]

Printf : 출력문의 함수명은 대소문자를 포함하여 stdio 헤더파일에서 정의되어있는 메소드의 이름이므로
         대소문자가 잘못되면 예외가 발생합니다.
         따라서 P를 소문자로 사용하여 printf가 되어야 합니다.

return 0 : C언어 명령어의 끝은 ;(세미콜론)으로 끝을 내야함으로 return 0;가 되어야합니다.

*/


int main()
{

    printf("First\n");
    return 0;
}




