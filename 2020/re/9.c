#include<stdio.h>
#include<stdlib.h>

int cmp(const void *v1, const void *v2)
{
    return *(int *)v1 - *(int *)v2;
}

int main()
{
    int N, nums[100];
    scanf("%d", &N);
    for(int i = 0; i < N; i++)  scanf("%d", &nums[i]);
    qsort(nums, N, sizeof(int), cmp);
    int cnt = 0;

    for(int i = 0; i < N; i++)
    {
        printf("%d ", nums[i]);
        if(nums[i] < 60)    cnt++;
    }
    printf("\nfail %d", cnt);
    return 0;
}