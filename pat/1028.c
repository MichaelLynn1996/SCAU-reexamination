#include<stdio.h>

struct person 
{
    char name[6];
    int year;
    int month;
    int day;
};

int main()
{
    int N, v = 0;
    struct person old, young;
    old.year = 2100;
    old.month = 12;
    old.day = 31;
    young.year = 1800;
    young.month = 0;
    young.day = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        struct person temp;
        scanf("%s %d/%d/%d", &temp.name, &temp.year,&temp.month ,&temp.day);
        if((temp.year > 1814 && temp.year < 2014)
          || (temp.year == 1814 && temp.month > 9)
          || (temp.year == 1814 && temp.month == 9 && temp.day >= 6)
          || (temp.year == 2014 && temp.year < 9)
          || (temp.year == 2014 && temp.month == 9 && temp.day <= 6))
        {
            v++;
            if(temp.year < old.year 
               || (temp.year == old.year && temp.month < old.month)
               || (temp.year == old.year && temp.month == old.month && temp.day < old.day))
                old = temp;
            if(temp.year > young.year 
               || (temp.year == young.year && temp.month > young.month)
               || (temp.year == young.year && temp.month == young.month && temp.day > young.day))
                young = temp;
        }
    }
    if(v == 0)  printf("0\n");
    else    printf("%d %s %s\n", v, old.name, young.name);
    return 0;
}