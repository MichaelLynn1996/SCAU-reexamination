#include "stdio.h"

int func(int n)
{
    if(n == 1)  return n;
    else return n * func(n - 1);
}
                  
int main()
{    
    int n;
    scanf("%d", &n);
    printf("%ld", func(n));
    return 0;
}
