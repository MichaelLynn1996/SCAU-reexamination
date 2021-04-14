#include<stdio.h>
#define MAX 61

char days[7][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

int main()
{
    char s1[MAX], s2[MAX], s3[MAX], s4[MAX];
    scanf("%s", &s1);
    scanf("%s", &s2);
    scanf("%s", &s3);
    scanf("%s", &s4);

    int pos = 0;
    while(s1[pos] != '\0' && s2[pos]!= '\0')
        if(s1[pos] == s2[pos] && s1[pos] >= 'A' && s1[pos] <= 'G')  break;
        else    pos++;
    printf("%s ", days[s1[pos] - 'A']);

    pos++;
    while(s1[pos] != '\0' && s2[pos]!= '\0')
        if(s1[pos] == s2[pos] && ((s1[pos] >= 'A' && s1[pos] <= 'N') || (s1[pos] >= '0' && s1[pos] <= '9')))    break;
        else    pos++;
    if(s1[pos] >= '0' && s1[pos] <= '9')    printf("%02d:", s1[pos] - '0');
    else if(s1[pos] >= 'A' && s1[pos] <= 'N')   printf("%02d:", s1[pos] - 'A' + 10);

    pos = 0;
    while(s3[pos] != '\0' && s4[pos]!= '\0')
        if(s3[pos] == s4[pos] && ((s3[pos] >= 'A' && s3[pos] <= 'Z') || (s3[pos] >= 'a' && s3[pos] <= 'z')))    break;
        else    pos++;
    printf("%02d\n", pos);
    return 0;
}