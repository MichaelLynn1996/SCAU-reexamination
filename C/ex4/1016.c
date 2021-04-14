#include<stdio.h>
#define N 5

int main(int argc, char const *argv[])
{
    char cs[N];
    for(int i = 0; i < N; i++) 
    {
        cs[i] = getchar();
        if(cs[i] > 64 && cs[i] < 91) cs[i] += 32;
    }
    for(int i = 0; i < N; i++)  printf("%c", cs[i]);
    return 0;
}