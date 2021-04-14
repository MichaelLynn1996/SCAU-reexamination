#include<stdio.h>
#define L 2.1
#define W 1.2
#define H 0.9
#define Pass "Yes, the box is ok"
#define Errors "No, the box is too small"

int main(int argc, char const *argv[])
{
    float l, w, h;
    scanf("%f,%f,%f", &l, &w, &h);
    if(l <= L || w <= W || h <= H)  printf(Pass);
    else    printf(Errors);
    return 0;
}
