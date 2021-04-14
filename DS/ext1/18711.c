#include<stdio.h>
#define MAX 100000

int main(int argc, char const *argv[])
{
    int n, map[26] = {0};
    // char str[MAX], ;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char c = getchar();
        map[c - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(map[i] != 0) printf("%c", i + 'a');
    }
    
    return 0;
}
