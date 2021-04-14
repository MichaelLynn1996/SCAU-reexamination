#include<stdio.h>

int main()
{
    double l, w, h;
    scanf("%lf,%lf,2.5%lf", &l, &w, &h);
    if(l <= 2.1 && w <= 1.2 && h <= 0.9)    printf("Yes, the box is ok");
    else    printf("No, the box is too small");
    return 0;
}