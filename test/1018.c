#include<stdio.h>

int main()
{
    int N, player1[2][3] = {0}, player2[2][3] = {0};
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        char p1, p2;
        scanf("%c %c\n", &p1, &p2);
        if(p1 == p2)
        {
            player1[0][1]++;
            player2[0][1]++;
        }else 
        {
            if(p1 == 'C')
            {
                if(p2 == 'J')
                {
                    player1[0][0]++;
                    player1[1][0]++;
                    player2[0][2]++;
                }else 
                {
                    player2[0][0]++;
                    player2[1][2]++;
                    player1[0][2]++;
                }
            }else if(p1 == 'J')
            {
                if(p2 == 'B')
                {
                    player1[0][0]++;
                    player1[1][1]++;
                    player2[0][2]++;
                }else 
                {
                    player2[0][0]++;
                    player2[1][0]++;
                    player1[0][2]++;
                }
            }else if(p1 == 'B')
            {
                if(p2 == 'J')
                {
                    player1[0][0]++;
                    player1[1][1]++;
                    player2[0][2]++;
                }else 
                {
                    player2[0][0]++;
                    player2[1][0]++;
                    player1[0][2]++;
                }
            }
        }
    }
    
    for(int i = 0; i < 3; i++)  printf("%d", player1[0][i]);
    for(int i = 0; i < 3; i++)  printf("%d", player2[0][i]);
    return 0;
}