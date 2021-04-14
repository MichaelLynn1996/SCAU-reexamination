#include<stdio.h>
#include<string.h>

int main()
{
    int N;
    char pass[81];
    scanf("%d", &N);
    getchar();
    for(int i = 0; i < N; i++)
    {
        int len = 0;
        while((pass[len] = getchar()) != '\n')  len++;
        pass[len] = '\0';
        if(len < 6)
        {
            printf("Your password is tai duan le.\n");
            continue;
        }
        int isOK = 1, hasNum = 0, hasWord = 0;
        for(int i = 0; i < len; i++)
            if(pass[i] >= '0' && pass[i] <= '9')    hasNum++;
            else if((pass[i] >= 'A' && pass[i] <= 'Z') || (pass[i] >= 'a' && pass[i] <= 'z'))   hasWord++;
            else if(pass[i] != '.')
            {
                isOK = 0;
                break;
            }
        if(!isOK)   printf("Your password is tai luan le.\n");
        else if(!hasNum && hasWord) printf("Your password needs shu zi.\n");
        else if(!hasWord && hasNum) printf("Your password needs zi mu.\n");
        else if(hasWord && hasNum)  printf("Your password is wan mei.\n");
//         else    printf("Your password is wan mei.\n");
    }
    return 0;
}