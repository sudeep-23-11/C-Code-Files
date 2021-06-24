//BubbleSort
#include<stdio.h>
int main()
{
    int i, j, N, t;
    scanf("%d", &N);
    int arr[N];
    for(i=0;i<N;i++)
    scanf("%d", &arr[i]);
    for(i=0;i<N;i++)
    {
        for(j=0;j<(N-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for(i=0;i<N;i++)
    printf("%d ", arr[i]);
    return 0;
}