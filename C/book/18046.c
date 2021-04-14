#include<stdio.h>

int main()
{
    int en = 0, num = 0, blank = 0, other = 0;
    char ch;
    while((ch = getchar()) != '\n')
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            en++;
        else if(ch >= '0' && ch <= '9')
            num++;
        else if (ch == ' ')
            blank++;
        else    other++;
    printf("%d %d %d %d", en, num, blank, other);
    return 0;
}