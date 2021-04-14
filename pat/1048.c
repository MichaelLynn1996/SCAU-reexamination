#include<stdio.h>
#include<string.h>

int main()
{
    char A[101], B[101], C[101];
    scanf("%s %s", &A, &B);
    int lenA = strlen(A) - 1, lenB = strlen(B) - 1;
    int len = lenA > lenB ? lenA : lenB;
    int bit = 1;
    C[len + 1] = '\0';
    while(lenA >= 0 && lenB >= 0)
    {
        if(bit % 2 == 1)
        {
            int num = (A[lenA] + B[lenB] - '0' * 2) % 13;
            if(num == 10)   C[len] = 'J';
            else if(num == 11)  C[len] = 'Q';
            else if(num == 12)  C[len] = 'K';
            else    C[len] = '0' + num;
        }else 
        {
            int num = B[lenB] - A[lenA];
            if(num < 0) num += 10;
            C[len] = num + '0';
        }
        len--;
        lenA--;
        lenB--;
        bit++;
    }
    while(lenA >= 0)
    {
        if(bit % 2 == 1)
            C[lenA] = A[lenA];
        else 
        {
            int num = '0' - A[lenA];
            if(num < 0) num += 10;
            C[lenA] = num + '0';
        }
        lenA--;
        bit++;
    }
    while(lenB >= 0)
    {
        C[lenB] = B[lenB];
        lenB--;
    }
    printf("%s\n", C);
    return 0;
}