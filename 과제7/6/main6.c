#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main()
{ 
    srand(time(NULL));

	int r1, r2, result;

	while(1){
        r1 = (int)rand()%100;
        r2 = (int)rand()%100;

		printf("%d + %d = ?\n? : ", r1, r2);
        scanf("%d", &result);
        if(result == 0) break;
        printf(r1+r2 == result ? "Correct\n" : "Wrong\n");
    }
    printf("Bye");
    scanf("%d", &result);
} 