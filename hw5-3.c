#include <stdio.h>
#include <stdlib.h>

//hw5-3
int main()
{
int hour, hour_money;
double money;
scanf("%d %d", &hour, &hour_money);

if(hour <= 60)
    money = hour * hour_money;
else if(hour >= 61 && hour <= 120)
    money = 60 * hour_money + (hour - 60) * hour_money * 1.33;
else if(hour >= 121)
    money = 60 * hour_money + 60 * hour_money * 1.33 + (hour - 120) * hour_money * 1.66;

printf("%.1f\n",money);
}
