#include <stdio.h>
#include "time_util.h"
int main() {
    struct time_ymdhms time;
    time = GetTimes();
    printf("���� �ð��� %d�� %d�� %d�� %d�� %d�� %d�� �Դϴ�\n", 
	time.year, time.month, time.day, time.hour, time.min, time.sec );
    scanf("%d", 0);
}