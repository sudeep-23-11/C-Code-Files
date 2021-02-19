//DynamicMemoryAllocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, *p, *q, N;
    scanf("%d", &N);
    p=(int *)malloc(N*sizeof(int));
    for(i=0;i<N;i++)
    {
        p[i]=(i+1)*10;
        printf("%d ", p[i]);
    }
    printf("\n");
    q=(int *)calloc(N, sizeof(int));
    for(i=0;i<N;i++)
    {
        q[i]=(i+1)*10;
        printf("%d ", q[i]);
    }
    printf("\n");
    p=(int *)realloc(p, sizeof(long));
    for(i=0;i<N;i++)
    {
        p[i]=(i+1)*10;
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);
    free(q);
    return 0;
}