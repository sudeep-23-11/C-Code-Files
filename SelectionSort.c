//SelectionSort
#include<stdio.h>
int main()
{
    int i, j, N, t, ele, pos;
    scanf("%d", &N);
    int arr[N];
    for(i=0;i<N;i++)
    scanf("%d", &arr[i]);
    for(i=0;i<(N-1);i++)
    {
        ele=arr[i];
        pos=i;
        for(j=(i+1);j<N;j++)
        {
            if(ele>arr[j])
            {
                ele=arr[j];
                pos=j;
            }
        }
        t=arr[i];
        arr[i]=arr[pos];
        arr[pos]=t;
    }
    for(i=0;i<N;i++)
    printf("%d ", arr[i]);
    return 0;
}