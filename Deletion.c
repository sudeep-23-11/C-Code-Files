//Deletion
#include<stdio.h>
int main()
{
    int i, N, pos;
    scanf("%d", &N);
    int arr[N];
    for(i=0;i<N;i++)
    scanf("%d", &arr[i]);
    scanf("%d", &pos);
    for(i=0;i<N;i++)
    printf("%d ", arr[i]);
    printf("\n");
    for(i=pos;i<(N-1);i++)
    arr[i]=arr[i+1];
    for(i=0;i<(N-1);i++)
    printf("%d ", arr[i]);
    return 0;
}