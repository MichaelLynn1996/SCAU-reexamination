#include<stdio.h>

int main()
{
    int nums[10] = {0};
    char cs[1001];
    scanf("%s", &cs);
    for(int i = 0; i < 1000; i++)
        if(cs[i] != '\0')   nums[cs[i] - '0']++;
        else    break;
    for(int i = 0; i < 10; i++)
        if(nums[i] != 0)    printf("%d:%d\n", i, nums[i]);
    return 0;
}