//ArrayInsertion
#include<stdio.h>
int main()
{
    int i, N, ele, pos;
    scanf("%d", &N);
    int arr[N];
    for(i=0;i<(N-1);i++)
    scanf("%d", &arr[i]);
    scanf("%d %d", &ele, &pos);
    for(i=0;i<(N-1);i++)
    printf("%d ", arr[i]);
    printf("\n");
    for(i=(N-1);i>=pos;i--)
    arr[i]=arr[i-1];
    arr[pos-1]=ele;
    for(i=0;i<N;i++)
    printf("%d ", arr[i]);
    return 0;
}