#include <stdio.h>
#include <string.h>
#define PSW "Li208@@@"
#define Pass "Pass"
#define Errors "Errors"

int main(int argc, char const *argv[])
{
    char str[256];
    gets(str);
    if (strcmp(str, PSW) == 0) printf(Pass);
    else    printf(Errors);
    return 0;
}
