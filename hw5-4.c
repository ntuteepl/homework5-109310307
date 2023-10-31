#include <stdio.h>
#include <stdlib.h>

//hw5-4
int main()
{
int H, M;
float H_angle, M_angle;
float angle;
scanf("%d %d", &H, &M);
if(H >= 1 && H <= 12 && M >= 0 && M <= 59)
{
    H_angle = H * 30 + M * 0.5;
    M_angle = M * 6;

    if(H_angle >= M_angle)
        angle = H_angle - M_angle;
    else
        angle = M_angle - H_angle;

    if(angle > 180)
        angle -= 180;
}

printf("%.3f\n",angle);
}
