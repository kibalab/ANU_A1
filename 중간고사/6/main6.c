#include <stdio.h>
#include <string.h>

void main()
{
    char input[101] ;
    scanf("%[^\n]s", &input);

    char *temp = strtok(input," "); //공백을 기준으로 문자열 자르기
    
    printf("argc = %d, ", strlen(temp));
    
    int i = 0;
    while (temp != NULL) { //널이 아닐때까지 반복
        printf("argv[%d]=%s, ", i,temp); // 출력
        temp = strtok(NULL, " ");	//널문자를 기준으로 다시 자르기
        i++;
    }
    
    scanf("%d", 0);// Wait for Result Check
}