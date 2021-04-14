#include<stdio.h>

int main()
{
    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);
    int i = 20;
    s += i;
    i = s / 60;
    s %= 60;
    m += i;
    i = m / 60;
    m %= 60;
    h += i;
    h %= 24;
    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}