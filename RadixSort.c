//RadixSort
#include<stdio.h>
#include<string.h>
void countsort(int A[], int n, int exp);
void radixsort(int A[], int n);
int main()
{
    int i, N;
    scanf("%d", &N);
    int arr[N];
    for(i=0;i<N;i++)
    scanf("%d", &arr[i]);
    radixsort(arr, N);
    for(i=0;i<N;i++)
    printf("%d ", arr[i]);
    return 0;
}
void radixsort(int A[], int n)
{
    int i, max, exp;
    max=A[0];
    for(i=0;i<n;i++)
    {
        if(max<A[i])
        max=A[i];
    }
    for(exp=1;(max/exp)>0;exp*=10)
    countsort(A, n, exp);
}
void countsort(int A[], int n, int exp)
{
    int i;
    int count[10], arr[n];
    memset(count, 0, sizeof(count));
    for(i=0;i<n;i++)
    count[(A[i]/exp)%10]++;
    for(i=1;i<10;i++)
    count[i]+=count[i-1];
    for(i=(n-1);i>=0;i--)
    {
        arr[count[(A[i]/exp)%10]-1]=A[i];
        count[(A[i]/exp)%10]--;
    }
    for(i=0;i<n;i++)
    A[i]=arr[i];
}