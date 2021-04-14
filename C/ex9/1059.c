#include  "stdio.h"

int func(int m, int n)
{
    int  r;
    while ((r=m%n)!=0)
    {
        m=n;
        n=r;
    }
    return  n;
}

int main()
{
    int  a, b, n;
    scanf("%d%d", &a, &b);
    printf("%d\n", func(a, b));
}