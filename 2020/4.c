#include<stdio.h>
#include<math.h>
#define OUTER "Outer:Two circles have no shared region"
#define INTERSECTED "Intersected:Two circles have shared region"

int main(int argc, char const *argv[])
{
    double x1, y1, r1, x2, y2, r2;
    scanf("%lf,%lf,%lf", &x1, &y1, &r1);
    scanf("%lf,%lf,%lf", &x2, &y2, &r2);
    if(sqrt(pow(x1 - x2, 2) + pow(x1 - x2, 2)) > (r1 + r2)) printf(OUTER);
    else    printf(INTERSECTED);
    return 0;
}
