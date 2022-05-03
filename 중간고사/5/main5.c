#include <stdio.h>
#include <stdlib.h>

int av(int a, int b);

void main() {
    int a[3][3];
    int b[3][3];
    int sum = 0;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
        {
           a[i][j] = av(i, j);
           b[i][j] = av(i, j);
        }
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
        {
           printf("a[%d][%d] : %d", i, j, a[i][j]);
           printf(" + ");
           printf("b[%d][%d] : %d", i, j, b[i][j]);
           printf(" = %d\n", av(a[i][j], b[i][j]));
        }
    
    scanf("%d", 0);// Wait for Result Check
}

int av(int a, int b)
{
    return a + b;
}