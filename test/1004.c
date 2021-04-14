#include<stdio.h>

struct Student {
    char name[11];
    char id[11];
    int score;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct Student high, low, temp;
    high.score = 0;
    low.score = 100;
    for(int i = 0; i < n; i++) {
        scanf("%s %s %d", &temp.name, &temp.id, &temp.score);
        if(temp.score > high.score)
            high = temp;
        if(temp.score < low.score)
            low = temp;
    }
    printf("%s %s\n", high.name, high.id);
    printf("%s %s\n", low.name, low.id);
    return 0;
}