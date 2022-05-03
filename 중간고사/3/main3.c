#include <stdio.h>
int main()
{
    int n, m;
    printf("임의의 정수를 입력하시오 : ");
    scanf("%d", &n);
    printf("위 정수보다 10이상 큰 정수를 입력하시오 : ");
    scanf("%d", &m);

    int av = 0;
    for(; n<m; n++)
    {
        if(n%2 == 0)
        {
            av += n;
        }
    }
    printf("n~m 중 짝수의 총합은 : %d", av);
    scanf("%d", 0);// Wait for Result Check
}