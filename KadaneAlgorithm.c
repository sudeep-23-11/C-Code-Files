//KadaneAlgorithm
#include<stdio.h>
int main()
{
    int i, N, cursum, maxsum;
    cursum=0;
    maxsum=0;
    scanf("%d", &N);
    int arr[N];
    for(i=0;i<N;i++)
    scanf("%d", &arr[i]);
    for(i=0;i<N;i++)
    {
        cursum+=arr[i];
        if(cursum<0)
        cursum=0;
        if(cursum>maxsum)
        maxsum=cursum;
    }
    printf("%d\n", maxsum);
    return 0;
}