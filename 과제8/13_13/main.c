#include <stdio.h>
#include <malloc.h>


int main() {
    char* str = "C Programming";

    while(*str)
    {
        printf("%c", *str);
        str++;
    }

    free(str);
    scanf("%c", *str);
}
