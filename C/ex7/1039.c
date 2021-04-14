#include<stdio.h>
#define N 10

int main(int argc, char const *argv[])
{
    int nums[N];
    for (int i = 0; i < N; i++) scanf("%d", &nums[i]);
    for (int i = N - 1; i >= 0; i--)    printf("%d\n", nums[i]);
    
    return 0;
}
