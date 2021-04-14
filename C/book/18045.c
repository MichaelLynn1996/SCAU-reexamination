#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    if (c == '0')
        printf("first 1");
    else if (c == '9')
        printf("8 last");
    else if (c > '0' && c < '9')
        printf("%c %c", c - 1, c + 1);
    else
        printf("error");
    return 0;
}