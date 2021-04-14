#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, map[10][10];
    scanf("%d", &n);
    int top = 0, left = 0, right = n - 1, bottom = n - 1, num = 1;
    while(top <= bottom && left <= right)
    {
        for(int i = left; i <= right; i++)
        {
            map[top][i] = num;
            num++;
        }
        top++;
        for(int i = top; i <= bottom; i++)
        {
            map[i][right] = num;
            num++;
        }
        right--;
        for(int i = right; i >= left; i--)
        {
            map[bottom][i] = num;
            num++;
        }
        bottom--;
        for(int i = bottom; i >= top; i--)
        {
            map[i][left] = num;
            num++;
        }
        left++;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%3d", map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
