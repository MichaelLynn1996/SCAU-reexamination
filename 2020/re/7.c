#include<stdio.h>

int main()
{
    int pic[3][4], max = 0;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 4; j++)
        {
            scanf("%d", &pic[i][j]);
            if(pic[i][j] > max) max = pic[i][j];
            pic[i][j] = 255 - pic[i][j];

        }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
            printf("%4d", pic[i][j]);
        printf("\n");
    }
    printf("max=%d", max);
        
    return 0;
}