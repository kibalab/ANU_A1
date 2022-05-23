#include <stdio.h>
#include <malloc.h>


int main() {
    int** arr = (int**)malloc(sizeof(int*)*8);// Last in \0
	for(int i = 0; i< 8; i++)
	{
		arr[i] = (int*)malloc(sizeof(int)*8);
		for(int j = 0; j< 8; j++)
		{
			*(arr[i]+j) = i * 10 + j;
		}
	}

    printf("%d", arr[3][4]);
	int i=0;
	scanf("%d", &i);
}
