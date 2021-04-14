#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 80

int main(int argc, char const *argv[])
{
    char str1[MAX], str2[MAX];
    gets(str1);
    gets(str2);
    int l1 = strlen(str1), l2 = strlen(str2), i = 0;
    for (; i < l1; i++)
    {
        bool flag = true;
        int k = i;
        for (int j = 0, k = i; j < l2; j++, k++)
            if (str1[k] != str2[j])
            {
                flag = false;
                break;
            }
        if (flag)
            break;
    }
    printf("%d", i + 1);
    
    return 0;
}

