//StacksAndQueues
#include<stdio.h>
int main()
{
    int N, M, top, front, rear, i, x, y;
    scanf("%d", &N);
    int stack[N];
    top=0;
    printf("Press 1 to insert element to stack\n");
    printf("Press 2 to delete element from stack\n");
    printf("Press 0 to display elements of the stack\n");
    printf("Press -1 to exit\n");
    while(1)
    {   
        scanf("%d", &x);
        if(x==-1)
        break;
        switch(x)
        {
            case 1: scanf("%d", &x);
                    stack[top]=x;
                    top++;
                    break;
            case 2: top--;
                    break;
            case 0: for(i=0;i<top;i++)
                    printf("%d ", stack[i]);
                    printf("\n");
        }
    }
    scanf("%d", &M);
    int queue[M];
    front=0;
    rear=0;
    printf("Press 1 to insert element to queue\n");
    printf("Press 2 to delete element from queue\n");
    printf("Press 0 to display elements of the queue\n");
    printf("Press -1 to exit\n");
    while(1)
    {   
        scanf("%d", &x);
        if(x==-1)
        break;
        switch(x)
        {
            case 1: scanf("%d", &y);
                    queue[rear]=y;
                    rear++;
                    break;
            case 2: front++;
                    break;
            case 0: for(i=front;i<rear;i++)
                    printf("%d ", queue[i]);
                    printf("\n");
        }
    }
    return 0;
}
