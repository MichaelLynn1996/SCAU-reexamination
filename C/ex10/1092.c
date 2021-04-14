#include "stdio.h"

/*create function f*/
int f(char s[])
{
    int i = 0;
    while(s[i] != '\0') i++;
    return i;
}

int main()
{
    char s[80];
    int i;
    scanf("%s", s);
    i=f(s);
    printf("%d", i);
    return 0;
}