#include "stdio.h"

void binary(int n) 
{
    int a[32], i = 0;
    if (n > 0)
    {
        binary(n / 2);
    }
    printf("%d", n % 2);
    
    // while (n > 0)
    // {
    //     a[i] = n % 2;
    //     i = i + 1;
    //     n = n / 2;
    // }
    // for (i--; i >= 0; i--)
    //     printf("%d", a[i]);
}

int main()
{
    int n;
    scanf("%d", &n);
    binary(n);
    return 0;
}