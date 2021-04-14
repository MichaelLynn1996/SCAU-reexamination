#include "stdio.h"
int main()
{
    int a, b; /*定义整型变量a和b*/
    float i, j; /*定义浮点变量i和j*/
    a=5;
    b=6;
    i=3.14; j=i*a*b;
    printf("a=%d,b=%d,i=%.2f,j=%.2f\n", a, b, i, j);
    return 0;
}