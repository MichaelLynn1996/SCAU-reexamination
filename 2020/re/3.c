#include<stdio.h>

int main()
{
    int n1, n2;
    char op;
    scanf("%d%c%d", &n1, &op, &n2);
    printf("%d%c%d=", n1, op, n2);
    if(op == '+')   printf("%d", n1 + n2);
    else if(op == '-')  printf("%d", n1 - n2);
    else if(op == '*')  printf("%d", n1 * n2);
    else if(op == '/')  printf("%d", n1 / n2);
    else if(op == '%')  printf("%d", n1 % n2);
    return 0;
}