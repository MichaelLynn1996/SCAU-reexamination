#include<stdio.h>
#define ROW 3
#define COL 4

int main(int argc, char const *argv[])
{
    int matrix[ROW][COL];
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            scanf("%d", &matrix[i][j]);
    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
            printf("%d ", matrix[j][i]);
        printf("\n");
    }  
    
    return 0;
}
