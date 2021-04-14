#include<stdio.h>

struct student
{
    char name[5];
    int Object[10];
    int cnt;
};

int main()
{
    int N, M, Object[10000] = {-1};
    scanf("%d %d", &N, &M);
    for(int i = 0; i < M; i++)
    {
        int T;
        scanf("%d", &T);
        Object[T] = 1;
    }
    int S = 0, O; 
    for(int i = 0; i < N; i++)
    {
        struct student stu;
        stu.cnt = 0;
        scanf("%s", &stu.name);
        int id;
        while(scanf("%d", &id) != EOF)
            if(Object[id] == 1)
            {
                stu.Object[stu.cnt] = id;
                stu.cnt++;
                O++;
            }
        if(stu.cnt > 0)
        {
            printf("%s: ", stu.name);
            for(int i = 0; i < stu.cnt; i++)
                if(i == stu.cnt)    printf("%d\n", stu.Object[i]);
                else    printf("%d ", stu.Object[i]);
            S++;
        }
    }
    printf("%d %d\n", S, O);
    
    return 0;
}