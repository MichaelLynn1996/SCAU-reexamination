#include<stdio.h>
#include<stdlib.h>

int cmp(const void *v1, const void *v2)
{
    return *(double *)v1 - *(double *)v2 > 0 ? -1 : 1;
}

int main()
{
    int N;
    double nums[10000];
    scanf("%d", &N);
    for(int i = 0; i < N; i++)  scanf("%lf", &nums[i]);
    while(N > 1)
    {
        qsort(nums, N, sizeof(double), cmp);
        double merge = (nums[N - 1] / 2) + (nums[N - 2] / 2);
        N--;
        nums[N - 1] = merge;
    }
    printf("%d\n", nums[0]);
    
    return 0;
}