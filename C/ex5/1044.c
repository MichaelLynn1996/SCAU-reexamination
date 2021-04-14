#include<stdio.h>
#define N 10

int main(int argc, char const *argv[])
{
    int min = 10000, nums[N];
    for(int i = 0; i < N; i++) 
    { 
        scanf("%d", &nums[i]);
        if (nums[i] < min)  min = nums[i];
    }
    printf("%d", min);

    return 0;
}
