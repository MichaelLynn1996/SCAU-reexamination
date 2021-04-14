#include<stdio.h>

int main()
{
    char ch;
    int n = 0;
    while((ch = getchar()) != '\n')
    {
        if(ch == ' ')
        {
            n++;
            while((ch = getchar()) == ' ');
        }
        
    }
    if(n != 0)  n++;
    printf("%d", n);

    return 0;
}