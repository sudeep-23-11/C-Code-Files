//StacksAndQueues
#include<stdio.h>
int main()
{
    int N, M, top, front, rear, i, x, y;
    top=0;
    scanf("%d", &N);
    int stack[N];
    while (N--)
    {    
        scanf("%d", &x);
        stack[top]=x;
        top++;
    }
    top--;
    top--;
    top--;
    for(i=0;i<top;i++)
    printf("%d ", stack[i]);
    printf("\n");
    front=0;
    rear=0;
    scanf("%d", &M);
    int queue[M];
    while (M--)
    {
        scanf("%d", &y);
        queue[rear]=y;
        rear++;
    }
    front++;
    front++;
    front++;
    for(i=front;i<rear;i++)
    printf("%d ", queue[i]);
    printf("\n");
    return 0;
}
