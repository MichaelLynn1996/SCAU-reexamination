#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);
    int b = sqrt(a);
    if(pow(b, 2) == a)  printf("Y");
    else    printf("N");      
    return 0;
}
