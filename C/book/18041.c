#include<stdio.h>
#include<math.h>

int main()
{
    double d, p, r;
    scanf("%lf %lf %lf", &d, &p, &r);
    if(d * r > p)   printf("God");
    else if(p == 0) printf("0.0");
    else
    {
        double m = log(p / (p - d * r)) / log(1 + r);
        printf("%.1lf", m);
    }
    
    return 0;
}