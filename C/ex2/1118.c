#include<stdio.h>

int main()
{
    /* code */
    float a;
    int b, c;
    char d, e;
    a = 3.5;
    b = a;
    c = 330;
    d = c;
    e = '\141';
    printf("%f,%d,%d,%c,%c\n", a, b, c, d, e);
    printf("3.500000,3,330,J,a");
    return 0;
}
