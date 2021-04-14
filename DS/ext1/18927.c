#include<stdio.h>
#define MAX 100000

int main(int argc, char const *argv[])
{
    int n, m, nums[MAX], L, R;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)  scanf("%d", &nums[i]);
    scanf("%d", &m);
    for(int i = 0; i < m; i++)
    {
        long sum = 0;
        scanf("%d %d", &L, &R);
        for(int j = L - 1; j <= R - 1; j++)
            sum += nums[j];
            printf("%ld\n", sum);
    }
    return 0;
}
