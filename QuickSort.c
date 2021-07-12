//QuickSort
#include<stdio.h>
int partiton(int A[], int l, int r);
void quicksort(int A[], int l, int r);
int main()
{
    int i, N;
    scanf("%d", &N);
    int arr[N];
    for(i=0;i<N;i++)
    scanf("%d", &arr[i]);
    quicksort(arr, 0, N-1);    
    for(i=0;i<N;i++)
    printf("%d ", arr[i]);
    return 0;
}
int partition(int A[], int l, int r)
{
    int i, j, pivot, t;
    pivot=A[r];
    i=(l-1);
    for(j=l;j<=r-1;j++)
    {
        if(A[j]<pivot)
        {
            i++;
            t=A[i];
            A[i]=A[j];
            A[j]=t;
        }
    }
    t=A[i+1];
    A[i+1]=A[r];
    A[r]=t;
    return (i+1);
}
void quicksort(int A[], int l, int r)
{
    int pi;
    if(l<r)
    {
        pi=partition(A, l, r);
        quicksort(A, l, pi - 1);
        quicksort(A, pi + 1, r);
    }
}