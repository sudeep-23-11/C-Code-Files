//StacksAndQueues
#include<stdio.h>
int main()
{
    int top=0, front=0, rear=0;
    int stack[25], queue[25];
    int i, x, y;
    scanf("%d", &x);
    while (x!=0)
    {    
        stack[top]=x;
        top++;
        scanf("%d", &x);
    }
    top--;
    top--;
    for(i=0;i<top;i++)
    printf("%d " ,stack[i]);
    printf("\n");
    scanf("%d", &y);
    while (y!=0)
    {
        queue[rear]=y;
        rear++;
        scanf("%d", &y);
    }
    front++;
    front++;
    for(i=front;i<rear;i++)
    printf("%d " ,queue[i]);
    printf("\n");
    return 0;
}
