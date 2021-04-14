#include<stdio.h>
#include<time.h>

void quickSort(int left, int right, int nums[], int n)
{
    if(left >= right)   return;
    int mid = left, i = left, j = right;
    while (i < j)
    {
        while(i < j)
        {
            if(nums[j] > nums[i])
                j--;
            else
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                mid = j;
                break;
            }
        }
        while(i < j)
        {
            if(nums[i] < nums[j])
                i++;
            else
            {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                mid = i;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++)  printf("%d ", nums[i]);
    printf("\n");
    quickSort(left, mid - 1, nums, n);
    quickSort(mid + 1, right, nums, n);
}

int main()
{
    long op, ed;
    op = clock();
    int N, nums[1000];
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
        scanf("%d", &nums[i]);
    quickSort(0, N - 1, nums, N);
    ed = clock();
    printf("%ldms\n",ed-op);
    return 0;
}