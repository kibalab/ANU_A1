#include <stdio.h>
#include "time_util.h"
int main() {
    struct time_ymdhms time;
    time = GetTimes();
    printf("현재 시간은 %d년 %d월 %d일 %d시 %d분 %d초 입니다\n", 
	time.year, time.month, time.day, time.hour, time.min, time.sec );
    scanf("%d", 0);
}