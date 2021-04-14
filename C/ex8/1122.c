#include "stdio.h"
#include "string.h"

int main()
{    
    char s[100]="";
    char a[30];
    for (int i = 0; i < 3; i++)
    {
        gets(a);
        int l = strlen(s);
        for (int j = 0; j < strlen(a); j++)
            s[j + l] = a[j];
    }
                 
    printf("%s", s);
}