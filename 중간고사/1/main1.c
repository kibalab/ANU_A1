#include <stdio.h>

void printGuGu(int i);

int main()
{
	int input = 0;
	printf("Input ( Range : 2~9 ) | ");
	scanf("%d", &input);
	printGuGu(input);
	scanf("%d", &input); //Wait for Result Check
	return 0;
}

void printGuGu(int i)
{
	for(int j = 1; j<= 9 ; j++)
	{
		printf("\n%d * %d = %d", i, j, i*j);
	}
}
