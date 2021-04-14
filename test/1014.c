#include<stdio.h>
#define MAX 61

void printfD(char D)
{
    int day = D - 'A' + 1;
    if(day == 1)    printf("MON ");
    else if(day == 2)   printf("TUE ");
    else if(day == 3)   printf("WED ");
    else if(day == 4)   printf("THU ");
    else if(day == 5)   printf("FRI ");
    else if(day == 6)   printf("SAT ");
    else if(day == 7)   printf("SUN ");
}

void printfH(char H) 
{
    if(H - '0' >= 0 && H - '0' <= 9)    printf("%c", H);
    else    printf("%d:", (H - 'A' + 10));
}

int main()
{
    char s1[MAX], s2[MAX], s3[MAX], s4[MAX], D = ' ', H = ' ';
    int M;
    scanf("%s", &s1);
    scanf("%s", &s2);
    scanf("%s", &s3);
    scanf("%s", &s4);
    int pos = 0;
    while(s1[pos] != '\0' && s2[pos] != '\0')
    {
        if(s1[pos] == s2[pos])
            if(D == ' ' && s1[pos] >= 'A' && s1[pos] <= 'G') D = s1[pos];
            else if(D != ' ' && ((s1[pos] >= '0' && s1[pos] <= '9') || (s1[pos] >= 'A' && s1[pos] <= 'N')))
            {
                H = s1[pos];
                break;
            }
        pos++;
    }
    pos = 0;
    while(s3[pos] != '\0' && s4[pos] != '\0')
    {
        if(s3[pos] == s4[pos] && s3[pos] >= 'a' && s3[pos] <= 'z') 
        {
            M = pos;
            break;
        }
        pos++;
    }
        
    printfD(D);
    printfH(H);
    printf("%02d", M);
    return 0;
}