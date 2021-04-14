#include <stdio.h>
#define MAX 81

int main()
{
    char str1[MAX], str2[MAX];
    int map_number[10] = {0}, map_alphabet[26] = {0};
    scanf("%s", &str1);
    scanf("%s", &str2);
    int i = 0, j = 0;
    while (str2[j] != '\0')
    {
        if (str1[i] == str2[j])
        {
            i++;
            j++;
        }
        else
        {
            if (str1[i] >= '0' && str1[i] <= '9')
            {
                if (map_number[str1[i] - '0'] != 1)
                {
                    printf("%c", str1[i]);
                    map_number[str1[i] - '0'] = 1;
                }
            }
            else if (str1[i] >= 'a' && str1[i] <= 'z')
            {
                if (map_alphabet[str1[i] - 'a'] != 1)
                {
                    printf("%c", str1[i] - 'a' + 'A');
                    map_alphabet[str1[i] - 'a'] = 1;
                }
            }
            else if (str1[i] >= 'A' && str1[i] <= 'Z')
            {
                if (map_alphabet[str1[i] - 'A'] != 1)
                {
                    printf("%c", str1[i]);
                    map_alphabet[str1[i] - 'A'] = 1;
                }
            }
            i++;
        }
    }
    while (str1[i] != '\0')
    {
        if (str1[i] == str2[j - 1])
            i++;
        else
        {
            if (str1[i] >= '0' && str1[i] <= '9')
            {
                if (map_number[str1[i] - '0'] != 1)
                {
                    printf("%c", str1[i]);
                    map_number[str1[i] - '0'] = 1;
                }
            }
            else if (str1[i] >= 'a' && str1[i] <= 'z')
            {
                if (map_alphabet[str1[i] - 'a'] != 1)
                {
                    printf("%c", str1[i] - 'a' + 'A');
                    map_alphabet[str1[i] - 'a'] = 1;
                }
            }
            else if (str1[i] >= 'A' && str1[i] <= 'Z')
            {
                if (map_alphabet[str1[i] - 'A'] != 1)
                {
                    printf("%c", str1[i]);
                    map_alphabet[str1[i] - 'A'] = 1;
                }
            }
            i++;
        }
    }
    return 0;
}