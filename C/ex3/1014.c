#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main(int argc, char const *argv[])
{
    double num;
    scanf("%lf", &num);
    printf("%0.2lf", PI * pow(num, 2));
    return 0;
}
