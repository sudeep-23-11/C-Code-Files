//SparseMatrices
#include<stdio.h>
int main()
{
    int i, j, N, M, c;
    c=0;
    scanf("%d %d", &N, &M);
    int arr[N][M];
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j]!=0)
            c++;
        }
    }
    int spma[3][c];
    c=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            if(arr[i][j]!=0)
            {
                spma[0][c]=i;
                spma[1][c]=j;
                spma[2][c]=arr[i][j];
                c++;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<c;j++)
        printf("%d ", spma[i][j]);
        printf("\n");
    }
    return 0;
}