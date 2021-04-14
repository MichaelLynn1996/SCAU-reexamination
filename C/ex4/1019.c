#include<stdio.h>
#define N 5
#define YES "YES"
#define NO "NO"

int main(int argc, char const *argv[])
{
    int nums[N];
    for(int i = 0; i < N; i++)  scanf("%d", &nums[i]);
    for(int i = 0; i < N; i++) 
        if(nums[i] % 27 == 0)   printf("%s\n", YES);
        else    printf("%s\n", NO);
    return 0;
}
