//BinarySearch
#include<stdio.h>
int main()
{
    int i, N1, N2, l, u, m, ele1, ele2, flag, index;
    scanf("%d", &N1);
    int arr[N1];
    for(i=0;i<N1;i++)
    scanf("%d", &arr[i]);
    l=0;
    u=N1-1;
    flag=0;
    scanf("%d", &ele1);
    while(l<=u)
    {
        m=(l+u)/2;
        if(ele1==arr[m])
        {
            flag=1;
            break;
        }
        else if(ele1<arr[m])
        u=m-1;
        else
        l=m+1;
    }
    if(flag==1)
    printf("The element %d is present at %d position\n", ele1, (m+1));
    else
    printf("The element %d is not present in the array\n", ele1);
    scanf("%d", &N2);
    int brr[N2];
    for(i=0;i<N2;i++)
    scanf("%d", &brr[i]);
    l=0;
    u=N2-1;
    index=-1;
    scanf("%d", &ele2);
    while(l<=u)
    {
        m=(l+u)/2;
        if(ele2==brr[m])
        index=m;
        if(ele2<=brr[m])
        u=m-1;
        else
        l=m+1;
    }
    if(index!=-1)
    printf("The element %d is firstly appeared at %d index\n", ele2, index);
    else
    printf("The element %d is not present in the array\n", ele2);
    return 0;
}