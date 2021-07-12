//CountingSort
#include<stdio.h>
#include<string.h>
void countsort(int A[], int n);
int main()
{
    int i, N;
    scanf("%d", &N);
    int arr[N];
    for(i=0;i<N;i++)
    scanf("%d", &arr[i]);
    countsort(arr, N);
    for(i=0;i<N;i++)
    printf("%d ", arr[i]);
    return 0;
}
void countsort(int A[], int n)
{
    int i, max, min, range;
    max=A[0];
    min=A[0];
    for(i=0;i<n;i++)
    {
        if(max<A[i])
        max=A[i];
        if(min>A[i])
        min=A[i];
    }
    range=max-min+1;
    int count[range], arr[n];
    memset(count, 0, sizeof(count));
    for(i=0;i<n;i++)
    count[A[i]-min]++;
    for(i=1;i<range;i++)
    count[i]+=count[i-1];
    for(i=(n-1);i>=0;i--)
    {
        arr[count[A[i]-min]-1]=A[i];
        count[A[i]-min]--;
    }
    for(i=0;i<n;i++)
    A[i]=arr[i];
}