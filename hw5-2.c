#include <stdio.h>
#include <stdlib.h>

//hw5-2
int main()
{
int min;
double money;
scanf("%d", &min);

if(min <= 800)
    money = min * 0.9;
else if(min > 800 && min < 1500)
    money = min * 0.9 * 0.9;
else if(min >= 1500)
    money = min * 0.9 * 0.79;

money = (int)((money * 10) + 0.5) / 10.0;
printf("%.1f\n",money);
}
