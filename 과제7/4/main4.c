#include <stdio.h>

int main(void)

{

    double total, rate, investment;  //(총금, 이율, 원금)

    int year, n;    //(돈 맡기는 기간, 출력 년도)

    n =1;

    printf("Money : ");

    scanf("%lf", &investment);

    printf("Rate(%%) : ");

    scanf("%lf", &rate);

    printf("Year : ");

    scanf("%d", &year);

    total = investment;

    rate = rate / 100.0; 


    while(year>0)

    {

        total = total *(1+rate);

        year--;

        n++;
    }

    printf("%lf\n", total);

    scanf("%lf", &investment);

    return 0;



}