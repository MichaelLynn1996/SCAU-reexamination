#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int compare(const void *value1, const void *value2) 
{
	// 升序
	return *(int*)value1 - *(int*)value2;
}

int main(int argc, char const *argv[])
{
    int n, scores[MAX], fail;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &scores[i]);
        if (scores[i] < 60) fail++;
    }
    
    qsort(scores, n, sizeof(int), compare);
    for(int i = 0; i < n; i++)  printf("%d ", scores[i]);
    printf("\nfail %d", fail);
        
    return 0;
}
