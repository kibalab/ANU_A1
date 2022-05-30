#include<stdio.h>
#include<malloc.h>
#include<string.h>

char* strreplace(char *str, char *a, char *b);

void main()
{
    char text[] = "Hello, World!It is my World!";
    
    
    printf("%s", strreplace(text, "World", "ANU"));
}

char* strreplace(char *str, char *a, char *b) 
{
  char* Result;
  char* subResult;
  int i;
  int count = 0;

  int OriginSize = strlen(a);
  int DistSize = strlen(b);


  if (DistSize != OriginSize) // 치환 타겟과 길이가 같지 않을경우
  { 
    for (i = 0; str[i] != '\0';) 
    {
      memcmp(&str[i], a, OriginSize) == 0 ? count++, i += OriginSize : i++;
    }
  } 
  else
  {
      i = strlen(str); // 같으면 그냥 넘김
  }

  int DeltaSize = count * (DistSize - OriginSize) + 1; // 치환했을때 총 문자열 길이 차이 + 여유공간 1
  Result = (char *) malloc(i + DeltaSize); // 치환결과를 담을 메모리 할당


  subResult = Result;
  while (*str) 
  {
    if (memcmp(str, a, OriginSize) == 0) 
    {
      memcpy(subResult, b, DistSize);
      subResult += DistSize;
      str  += OriginSize;
    } else *subResult++ = *str++;
  }
  *subResult = '\0';

  return Result;
}