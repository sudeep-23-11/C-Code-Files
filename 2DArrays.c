//2DArrays
#include<stdio.h>
void printarray(int A[][2], int x, int y);
int main()
{
    int i;
    int arr[10][2];
    for(i=0;i<10;i++)
    {
        arr[i][0]=(i+1);
        arr[i][1]=(i+1)*10;
    }
    printarray(arr, 10, 2);
    return 0;
}
void printarray(int A[][2], int x, int y)
{
    int i, j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        printf("%d ", *(*(A+i)+j));
        printf("\n");
    }
}