#include<stdio.h>
#include<math.h>

int main()
{
    double x1, y1, r1;
    scanf("%lf,%lf,%lf", &x1, &y1, &r1);
    double x2, y2, r2;
    scanf("%lf,%lf,%lf", &x2, &y2, &r2);
    if(sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) > r1 + r2)
        printf("Outer:Two circles have no shared region");
    else    printf("Intersected: Two circles have share region");
    return 0;
}
