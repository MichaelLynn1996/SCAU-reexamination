#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 80

int main(int argc, char const *argv[])
{
    char str[80];
    gets(str);
    int i = 0, j = strlen(str) - 1;
    bool flag = true;
    while (i < j)
    {
        if(str[i] != str[j]) 
        {
            flag = false;
            break;
        }   
        i++;
        j--;
    }
    if(flag)    printf("YES");
    else    printf("NO");
    
    return 0;
}
