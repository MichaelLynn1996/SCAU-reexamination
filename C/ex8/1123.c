#include "stdio.h"

int main()
{   char  s[50];
    printf("What's your name?\n");
    gets(s);    /*iput your name from the keyboard*/
    printf("Your name is ");
    printf("%s", s);  /*output your name*/
}