#include<stdio.h>
#include<malloc.h>

void stradd(char* str, char c);

void main()
{
    char text[5] = {'h', 'e', 'l', 'l'};
    
    printf("%s\n", text);
    stradd(text, 'o');
    printf("%s\n", text);
}

void stradd(char* str, char c)
{
    realloc(str, sizeof(str) + sizeof(char) * 2);
    
    str[sizeof(str) / sizeof(str[0])] = c;
    str[sizeof(str) / sizeof(str[0]) + 1] = '\0';

    return;
}