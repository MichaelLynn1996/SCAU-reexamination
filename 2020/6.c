#include<stdio.h>
#define N 10

int main(int argc, char const *argv[])
{
    char cs[N];
    for(int i = 0; i < N; i++) 
    {
        cs[i] = getchar();
        if(cs[i] > 47 && cs[i] < 58)
        {
            int temp = cs[i] - 48;
            temp = (temp + 3) % 10;
            cs[i] = temp + 48;
        } else if(cs[i] > 64 && cs[i] < 91) cs[i] += 32;
        else if(cs[i] > 96 && cs[i] < 123)  cs[i] -= 32;
    }
    for(int i = 0; i < N; i++)  printf("%c", cs[i]);
    return 0;
}
