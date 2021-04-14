#include<stdio.h>
#define ROW 3
#define COL 4

int main(int argc, char const *argv[])
{
    int pic[ROW][COL], max;
    for(int i = 0; i < ROW; i++) 
        for(int j = 0; j < COL; j++) 
        {
            scanf("%d", &pic[i][j]);
            if(pic[i][j] > max) max = pic[i][j];
            pic[i][j] = 255 - pic[i][j];
        }
    for(int i = 0; i < ROW; i++) 
    {
        for(int j = 0; j < COL; j++) 
            printf("%4d", pic[i][j]);
        printf("\n");
    }
    printf("max=%d", max);
    
    return 0;
}
