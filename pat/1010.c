#include<stdio.h>

int main()
{
    int a, n;
    int flag = scanf("%d %d", &a, &n);
    while(flag != EOF)
    {
        if(n != 0) 
        {
            printf("%d %d", a * n, n - 1);
            flag = scanf("%d %d", &a, &n);
        }
    }
    printf("\n");
    return 0;
}