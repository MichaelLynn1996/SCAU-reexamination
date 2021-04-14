#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, sum = 1;
    scanf("%d", &n);
    for(int i = n; i > 0; i--)  sum *= i;
    printf("%d", sum);
    return 0;
}
