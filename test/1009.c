#include<stdio.h>

int main()
{
    char str[80];
    int len = 0;
    
    while((str[len] = getchar()) != '\n')
        len++;
    int last = len;
    for(int i = len - 1; i >= 0; i--)
    {
        if(str[i] == ' ')
        {
            for(int j = i + 1; j < last; j++)   printf("%c", str[j]);
            printf(" ");
            last = i;
        }else if(i == 0)
        {
            for(int j = i; j < last; j++)   printf("%c", str[j]);
            printf(" ");
        }
    }
    
    return 0;
}