#include<stdio.h>
#define ROW 3
#define COL 4

int main(int argc, char const *argv[])
{
    int nums[ROW][COL];
    int map[ROW][COL];
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
        {
            scanf("%d", &nums[i][j]);
            map[i][j] = 0;
        }
    //  行中最大
    for (int i = 0; i < ROW; i++)
    {
        int pos = 0;
        for (int j = 1; j < COL; j++)
            if (nums[i][j] > nums[i][pos])  
                pos = j;
        map[i][pos]++;
    }
    //  列中最小
    for (int i = 0; i < COL; i++)
    {
        int pos = 0;
        for (int j = 1; j < ROW; j++)
            if (nums[j][i] < nums[pos][i])  
                pos = j;
        map[pos][i]++;
    }
    int flag = 1;
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            if (map[i][j] == 2)
            {
                printf("%d", nums[i][j]);
                flag = 0;
            }
    if (flag)
        printf("NO");
    
    
    return 0;
}
