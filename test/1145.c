#include<stdio.h>
#include<string.h>

int main()
{
    char str[81];
    scanf("%s", &str);
    int len = strlen(str);
    int i = 0, j = len - 1;
    while (i < j)
    {
        if(str[i] == str[j])
        {
            i++;
            j--;
        }else
        {
            printf("N");
            return 0;
        }
    }
    printf("Y");
    return 0;
}