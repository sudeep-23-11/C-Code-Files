//LinearSearch
#include<stdio.h>
int main()
{
    int i, N, ele, flag=0;
    scanf("%d", &N);
    int arr[N];
    for(i=0;i<N;i++)
    scanf("%d", &arr[i]);
    scanf("%d", &ele);
    for(i=0;i<N;i++)
    {
        if(arr[i]==ele)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("The element %d is present at %d position\n", ele, (i+1));
    else
    printf("The element %d is not present in the array\n", ele);
    return 0;
}