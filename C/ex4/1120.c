#include <stdio.h>
#include <math.h>
int main()
{
    // float a, b;
    // scanf("%f,%f", &a, &b);
    // if (fabs(a * a + b * b - 1) < 1e-3)
    //     printf("Y\n");
    // else
    //     printf("N\n");
    double a, b;
    scanf("%lf,%lf", &a, &b);
    double d = sqrt(pow(a, 2) + pow(b, 2));
    int len = (int)(d * 1000 + 0.5);
    if(len == 1000) printf("Y");
    else    printf("N");
    return 0;
}
