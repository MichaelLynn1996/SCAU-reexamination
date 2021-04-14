#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int cmp(const void *v1, const void *v2)
{
    return *(int*)v2 - *(int*)v1;
}

int main()
{
    int N, nums[10001], map[10001][10001];
    scanf("%d", &N);
    for(int i = 0; i < N; i++)  scanf("%d", &nums[i]);
    qsort(nums, N, sizeof(int), cmp);
    
    int m = N, n = 1;
    for(int i=1;i<=sqrt(N);i++){
        if(N % i==0){
            n=i;
        }
    }
    m = N / n;
    
    int left = 0, top = 0, right = n - 1, bottom = m - 1, pos = 0;
    while(left <= right && top <= bottom)
    {
        for(int i = left; i <= right; i++)
        {
            map[top][i] = nums[pos];
            pos++;
        }
        top++;
        for(int i = top; i <= bottom; i++)
        {
            map[i][right] = nums[pos];
            pos++;
        }
        right--;
        for(int i = right; i >= left; i--)
        {
            map[bottom][i] = nums[pos];
            pos++;
        }
        bottom--;
        for(int i = bottom; i <= top; i--)
        {
            map[i][left] = nums[pos];
            pos++;
        }
        left++;
    }
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        {
            printf("%d", map[i][i]);
            if(j == n - 1)  printf("\n");
            else    printf(" ");
        }
    
    return 0;
}