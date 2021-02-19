//PointersAndArray
#include<stdio.h>
void cbv(int A[], int N);
void cba(int *p, int N);
int main()
{   
    int i;
    int arr[10];
    for(i=0;i<10;i++)
    arr[i]=(i+1)*10;
    cbv(arr, 10);
    cba(arr, 10);
    return 0;
}
void cbv(int A[], int N)
{
    int i;
    for(i=0;i<N;i++)
    printf("%d ", *(A+i));
    printf("\n");
}
void cba(int *p, int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
}