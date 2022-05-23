#include <stdio.h>
#include <malloc.h>


int main() {
    int arr[8][8] ={};

	int (*harr)[8] = arr;
	for(int i = 0; i< 8; i++)
	{
		for(int j = 0; j< 8; j++)
		{
			(*(harr+i))[j] = i * 10 + j;
		}
	}

	printf("%d", arr[3][4]);
	int i=0;
	scanf("%d", &i);
}
