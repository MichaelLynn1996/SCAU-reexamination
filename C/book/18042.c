#include<stdio.h>

int main()
{
    float x, y;
    scanf("%f", &x);
    if(x < 1)   y = x;
    else if(x >= 1 && x < 10)   y = 2 * x - 1;
    else if(x >= 10)    y = 3 * x - 11;
    printf("%.2f", y);
    return 0;
}