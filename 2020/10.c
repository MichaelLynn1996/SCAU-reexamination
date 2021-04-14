#include<stdio.h>
#include<stdlib.h>
#define CARGO_KIND 3

struct Cargo
{
    double value;
    int weight;
}Cargo;

int compare(const void *value1, const void *value2) {
    double v1 = ((struct Cargo*)value1)->value / ((struct Cargo*)value1)->weight;
    double v2 = ((struct Cargo*)value2)->value / ((struct Cargo*)value2)->weight;
	// 降序
	return v1 - v2? -1 : 1;
}

int main(int argc, char const *argv[])
{
    int vol;
    double max;
    struct Cargo cargos[CARGO_KIND];

    scanf("%d", &vol);
    for (int i = 0; i < CARGO_KIND; i++)
        scanf("%lf %d", &cargos[i].value, &cargos[i].weight);
    qsort(cargos, CARGO_KIND, sizeof(Cargo), compare);
    for (int i = 0; i < CARGO_KIND; i++)
    {
        if(vol <= cargos[i].weight)
        {
            max += cargos[i].value / cargos[i].weight * vol;
            break;
        }
        else 
        {
            max += cargos[i].value;
            vol -= cargos[i].weight;
        }
    }
    printf("%0.1lf", max);
    
    return 0;
}
