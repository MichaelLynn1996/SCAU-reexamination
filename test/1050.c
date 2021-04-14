#include<stdio.h>
#include<string.h>

int main()
{
    char str1[81], str2[81];
    scanf("%s", &str1);
    scanf("%s", &str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for(int i = 0; i < len1; i++)
    {
        if(str1[i] == str2[0])
        {
            for(int j = 1; j < len2; j++)
            {
                if(str1[i + j] != str2[j])
                {
                    break;
                }else if (j == len2 - 1)
                {
                    printf("%d", i + 1);
                    return 0;
                }
            }
        }
    }
    return 0;
}