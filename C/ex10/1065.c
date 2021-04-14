#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[3][4]={{1,3,5,7},{9,11,13,15},{17,19,21,23}}; 
    printf("%d\n", a[2][1]);
    printf("%d\n", a[1]);
    printf("%d\n", a);
    printf("%d\n", a + 1);
    printf("%d\n", *a + 1);
    printf("%d\n", *(a + 1));
    printf("%d\n", a[2] + 1);
    printf("%d\n", *(a + 1) + 1);
    printf("%d\n", *(*(a + 2) + 2));
    return 0;
}
