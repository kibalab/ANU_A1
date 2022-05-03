#include <time.h>

struct time_ymdhms
{
    int year;
    int month;
    int day;
    int hour;
    int min;
    int sec;
};


struct time_ymdhms GetTimes()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    struct time_ymdhms data;
    data.year = tm.tm_year + 1900;
    data.month = tm.tm_mon + 1;
    data.day = tm.tm_mday;
    data.hour = tm.tm_hour;
    data.min = tm.tm_min;
    data.sec = tm.tm_sec;
    return data;
}
