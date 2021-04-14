#include<stdio.h>
#include<string.h>

struct Fruit
{
    char name[9];
    double weight;
};


int main()
{
    struct Fruit fruits[3];
    for(int i = 0; i < 3; i++)
        scanf("%s %lf", &fruits[i].name, &fruits[i].weight);
    int day;
    char name[9];
    scanf("%d %s", &day, &name);
    for(int i = 0; i < 3; i++)
    {
        if (strcmp(fruits[i].name, name) == 0)
        {
            if(fruits[i].weight - (day - 1) * 0.5 <= 0)   printf("%s is empty", fruits[i].name);
            else    printf("%s has %0.1lfkg", fruits[i].name, fruits[i].weight - (day - 1) * 0.5);
            break;
        }
        if(i == 2)  printf("no this fruit");
    }
    return 0;
}