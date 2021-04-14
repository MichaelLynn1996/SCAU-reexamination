#include<stdio.h>

int main()
{
    int max = 0, n;
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &n);
        max = n > max?n : max;
    }
    printf("%d", max);
    return 0;
}