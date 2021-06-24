//MergeSort
#include<stdio.h>
void merge(int A[], int l, int m, int r);
void mergesort(int A[], int l, int r);
int main()
{
    int i, N;
    scanf("%d", &N);
    int arr[N];
    for(i=0;i<N;i++)
    scanf("%d", &arr[i]);
    mergesort(arr, 0, N-1);    
    for(i=0;i<N;i++)
    printf("%d ", arr[i]);
    return 0;
}
void merge(int A[], int l, int m, int r)
{
    int i, j, k, nl, nr;
    nl=m-l+1; 
    nr=r-m;
    int larr[nl], rarr[nr];
    for(i=0;i<nl;i++)
    larr[i]=A[l+i];
    for(j=0;j<nr;j++)
    rarr[j]=A[m+1+j];
    i=0; 
    j=0; 
    k=l;
    while((i<nl)&&(j<nr)) 
    {
        if(larr[i]<=rarr[j]) 
        {
            A[k]=larr[i];
            i++;
        }
        else
        {
            A[k]=rarr[j];
            j++;
        }
        k++;
    }
    while(i<nl) 
    {       
        A[k]=larr[i];
        i++;
        k++;
    }
    while(j<nr) 
    {    
        A[k]=rarr[j];
        j++;
        k++;
    }
}
void mergesort(int A[], int l, int r)
{
    int m;
    if(l<r) 
    {
        m=l+(r-l)/2;
        mergesort(A, l, m);
        mergesort(A, m+1, r);
        merge(A, l, m, r);
    }
}