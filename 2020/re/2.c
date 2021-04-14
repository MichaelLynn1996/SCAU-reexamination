#include<stdio.h>
#include<string.h>
#define PWD "Li208@@@"

int main()
{
    char input[9];
    scanf("%s", &input);
    if(strcmp(input, PWD) == 0) printf("Pass");
    else    printf("Errors");
    return 0;
}