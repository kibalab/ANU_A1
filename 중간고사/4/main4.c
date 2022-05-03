#include <stdio.h>
#include <stdlib.h>
int mul[3][3];
void multiply(int (*a)[3], int (*b)[3]);

void main() {
    int a[3][3];
    int b[3][3];
    // a, b행렬에 각각 0~2까지의 랜덤값을 입력하여 a, b행렬 초기화
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
        {
            a[i][j] = rand()%2;
            b[i][j] = rand()%2;
        }

    multiply(a, b); // call by reference로 두 개의 배열을 전달
    // 출력하기 위한 루틴
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
        {
            printf("a[%d][%d]: %d, b[%d][%d]: %d,  mul[%d][%d]: %d\n",
            i ,j ,a[i][j], i ,j ,b[i][j], i ,j , mul[i][j] );
        }
    scanf("%d", 0);// Wait for Result Check
}

// 행렬의 곱을 계산하기 위한 함수
void multiply(int (*a)[3], int (*b)[3])
{

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			mul[i][j] = (*(a+i))[0] * (*b)[j] + (*(a+i))[1]*(*(b+1))[j] + (*(a+i))[2]*(*(b+2))[j];
		}
	}
}
