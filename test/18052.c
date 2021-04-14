#include <stdio.h>
int a[16]={2, 3, 5, 7, 11, 13, 17, 23, 29, 31, 34, 71, 79, 97, 103};
void display()
{
    int i;
    for(i=0; i<16; i++) printf("%d ", a[i]);
}
int main()
{
    int n = 0;
    scanf("%d", &a[15]);
    for(int i = 14; i >= 0; i--)
    {
        if(a[i + 1] < a[i])
        {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }
    display();
    return 0;
}