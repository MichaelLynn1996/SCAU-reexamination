// 1035 打印菱形图案

// Description
// 由键盘输入正数n（n<30），要求输出如下2*n+1行的菱形图案。


// 输出格式
// 菱形右边不留多余空格


// 输入样例
// 2

// 输出样例
//   *
//  ***
// *****
//  ***
//   *

// 作者 admin

// Version: 0
#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < 2 * n + 1; i++)
    {
        int blank = abs(n - i);
        int stars = 2 * n + 1 - blank * 2;
        for(int j = 0; j < blank; j++)  printf(" ");
        for(int j = 0; j < stars; j++)  printf("*");
        printf("\n");
    }
    return 0;
}
