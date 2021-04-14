#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    char c;
    scanf("%d%c%d", &a, &c, &b);
    if(c == '+')    printf("%d", a + b);
    else if(c == '-')    printf("%d", a - b);
    else if(c == '*')    printf("%d", a * b);
    else if(c == '/')    printf("%d", a / b);
    else if(c == '%')    printf("%d", a % b);
    return 0;
}