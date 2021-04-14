#include<stdio.h>
#define MAX 200001

int main(int argc, char const *argv[])
{
    int n, map[MAX] = {0}, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (map[temp] == 0) 
        {
            cnt++;
            map[temp]++;
        }
    } 
    printf("%d", cnt);
    return 0;
}