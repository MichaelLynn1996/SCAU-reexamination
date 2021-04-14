#include<stdio.h>
#include<string.h>
#define NAME_LENGTH 256
#define FRUIT_KIND 3
#define DAY_COMSUME 0.5
#define APPLE "apple"
#define ORANGE "orange"
#define PEAR "pear"
#define EMPTY " is empty"
#define NO_THIS_FRUIT "no this fruit"
#define HAS " has "

struct Fruit
{
    char name[NAME_LENGTH];
    float weight;
};


int main(int argc, char const *argv[])
{
    struct Fruit fruits[FRUIT_KIND];
    strcpy(fruits[0].name, APPLE);
    strcpy(fruits[1].name, ORANGE); 
    strcpy(fruits[2].name, PEAR);

    for(int i = 0; i < FRUIT_KIND; i++) 
    {
        char name[NAME_LENGTH];
        float weight;
        scanf("%s\t%f", &name, &weight);
        if (strcmp(name, APPLE) == 0)    fruits[0].weight = weight;
        else if (strcmp(name, ORANGE) == 0)    fruits[1].weight = weight;
        else if (strcmp(name, PEAR) == 0)    fruits[2].weight = weight;
    }
    char name[NAME_LENGTH];
    int day;
    scanf("%d\t%s", &day, &name);
    if (strcmp(name, APPLE) == 0)
    {
        if (fruits[0].weight - (day - 1) * DAY_COMSUME <= 0)
            printf("%s%s", fruits[0].name, EMPTY);
        else    printf("%s%s%.1fkg", fruits[0].name, HAS, fruits[0].weight - (day - 1) * DAY_COMSUME);
    }
    else if (strcmp(name, ORANGE) == 0)
    {
        if (fruits[1].weight - (day - 1) * DAY_COMSUME <= 0)
            printf("%s%s", fruits[1].name, EMPTY);
        else    printf("%s%s%.1fkg", fruits[1].name, HAS, fruits[1].weight - (day - 1) * DAY_COMSUME);
    }
    else if (strcmp(name, PEAR) == 0)
    {
        if (fruits[2].weight - (day - 1) * DAY_COMSUME <= 0)
            printf("%s%s", fruits[2].name, EMPTY);
        else    printf("%s%s%.1fkg", fruits[2].name, HAS, fruits[2].weight - (day - 1) * DAY_COMSUME);
    }
    else    printf(NO_THIS_FRUIT);

    return 0;
}
