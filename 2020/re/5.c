#include<stdio.h>

int main()
{
    int N, sum = 1;
    scanf("%d", &N);
    while(N > 0) 
    {
        sum *= N;
        N--;
    }
    printf("%d", sum);
    return 0;
}