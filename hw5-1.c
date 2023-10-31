#include <stdio.h>
#include <stdlib.h>

//hw5-1
int main()
{
float c;
double f;
scanf("%f", &c);

f = c * 9 / 5 + 32;
f = (int)((f * 10) + 0.5) / 10.0;
printf("%.1f\n",f);
}
