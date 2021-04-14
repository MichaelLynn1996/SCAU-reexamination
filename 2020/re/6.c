#include<stdio.h>

int main()
{
    char str[11];
    for(int i = 0; i < 10; i++)
    {
        str[i] = getchar();
        if(str[i] >= 'a' && str[i] <= 'z')  str[i] += 'A' - 'a';
        else if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 'a' - 'A';
        else if(str[i] >= '0' && str[i] <= '9')
        {
            int num = str[i] - '0';
            num = (num + 3) % 10;
            str[i] = num + '0';
        }
    }
    str[10] = '\0';
    printf("%s", str);
    return 0;
}