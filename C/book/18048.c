#include<stdio.h>

int main()
{
    int n;
    double h = 100, sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        if(i == 0)  sum += h;
        else    sum += h * 2;
        h /= 2;
    }
    printf("%.3lf %.3lf", sum, h);
    return 0;
}