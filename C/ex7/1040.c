#include<stdio.h>
#define N 20

int main(int argc, char const *argv[])
{
    int nums[N];
    int len = 0;
    for(int i = 0; i < N; i++)
    {
        int temp;
        scanf("%d", &temp);
        int flag = 1;
        for (int j = 0; j < len; j++)
            if (temp == nums[j])
            {
                flag = 0;
                break;
            }
        if (flag)
        {
            len++;
            nums[len] = temp;
        }
    }
    printf("%d", len);
    return 0;
}
