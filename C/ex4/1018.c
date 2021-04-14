#include<stdio.h>
#include<stdlib.h>
#define N 3

int compare(const void *value1, const void *value2)
{
    return *(int *)value1 - *(int *)value2;
}

int main(int argc, char const *argv[])
{
    int nums[N];
    scanf("%d,%d,%d", &nums[0], &nums[1], &nums[2]);
    qsort(nums, N, sizeof(int), compare);
    printf("%d,%d,%d", nums[0], nums[1], nums[2]);
    return 0;
}
