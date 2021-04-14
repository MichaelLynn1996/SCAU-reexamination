#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char str[501], temp[501], ch;
    int max = 0, cnt = 0;
    while((ch = getchar()) != '\n')
    {
        if(ch == ' ' || ch == '.')
        {
            temp[cnt] = '\0';
            if(cnt > max){
                strcpy(str, temp);
                max = cnt;
            }
            cnt = 0;
        }else 
        {
            temp[cnt] = ch;
            cnt++;
        }
    }
    printf("%s", str);
    return 0;
}
