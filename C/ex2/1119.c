#include<stdio.h>

int main()
{
    /* code */
    int a, b, c;
    float d = 15, e, f;
    a = 35 % 7;
    b = 15 / 10;
    c = b++;
    e = 15/ 10;
    f = d / 10;
    printf("%d,%d,%d,%f,%f,%f\n", a, b, c, d, e, f);
    printf("0,1,1,15.0,1.5,1.5");
    return 0;
}
