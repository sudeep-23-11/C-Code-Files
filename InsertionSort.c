//InsertionSort
#include<stdio.h>
int main()
{
    int i, N, t, pos;
    scanf("%d", &N);
    int arr[N];
    for(i=0;i<N;i++)
    scanf("%d", &arr[i]);
    for(i=0;i<N;i++)
    {
        t=arr[i+1];
        pos=i;
        while((t<arr[pos])&&(pos>=0))
        {
            arr[pos+1]=arr[pos];
            pos--;
        }
        arr[pos+1]=t;
    }
    for(i=0;i<N;i++)
    printf("%d ", arr[i]);
    return 0;
}