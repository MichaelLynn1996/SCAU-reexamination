#include<stdio.h>

int main()
{
    int N, map[26] = {0};
    char ch;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%c", &ch);
        map[ch - 'a']++;
    }
    for(int i = 0; i < 26; i++)
        if(map[i] > 0)  printf("%c", i + 'a');
    return 0;
}