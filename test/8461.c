#include<stdio.h>

int main()
{
    int N, nums[100];
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
        scanf("%d", &nums[i]);
    for(int i = N - 1; i >= 0; i--)
    {
        int isChange = 0;
        for(int j = 0; j < i; j ++)
        {
            if(nums[j] > nums[j + 1])
            {
                int temp = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = temp;
                isChange = 1;
            }
        }
        
        for(int k = 0; k < N; k++)
        {
            if(k == N - 1)  printf("%d\n", nums[k]);
            else    printf("%d ", nums[k]);
        }

        if (!isChange)
        {
            break;
        }
    }
    return 0;
}