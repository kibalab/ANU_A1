#include <stdio.h>

int sum(int a, int b);
int mul(int a, int b);


int main (){
    short a = 10000;
    short b = 30000;

    for(int i = 0 ; i<= 10; i++)
    {
        for(int j = 0 ; j<= 10; j++) 
        {
            printf("sum : %d\n", sum(i, j));
            printf("mul : %d\n", mul(i, j));
        }
    }

    return 0;
}




int sum(int a, int b)
{
    return a + b;
}

int mul(int a, int b)
{
    return a* b;
}