#include <stdio.h>
#include <malloc.h>


int main() {
    char* str = (char*)malloc(sizeof(char)*26);// Last in \0
    char* strOrigin = str;

    for(int i = 0; i< 26; i++)
    {
	    *str = 97 + i;
	    str++;
    }
    *str = 0;
    str = strOrigin;

    while(*str)
    {
	    printf("%c", *str);
	    str++;
    }


    free(str);
    scanf("%c", *str);
}
