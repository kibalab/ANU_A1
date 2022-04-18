#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SwapAddress(int* ip1, int* ip2)
{
    int tmp;

    tmp = *ip1;
    *ip1 = *ip2;
    *ip2 = tmp;
}

int main()
{        
    int ip1, ip2;
    printf("Num1 (Integer) : ");
    scanf("%d", &ip1);
    printf("\n");
    printf("Num2 (Integer) : ");
    scanf("%d", &ip2);
    printf("\n");

    SwapAddress(&ip1, &ip2);
    printf("===== [ SWAP ] =====\n", ip1, ip2);
    printf("Num1 : %d\nNum2 : %d\n", ip1, ip2);
    scanf("%d", &ip1); // 대기
}