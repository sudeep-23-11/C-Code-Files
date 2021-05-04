//Deques
#include<stdio.h>
int main()
{
    int N, front, rear, num, i, x, y;
    scanf("%d", &N);
    int deque[2*N];
    front=N;
    rear=N;
    num=N;
    while (num--)
    {
        scanf("%d", &x);
        deque[rear]=x;
        rear++;
    }
    front++;
    front++;
    front++;
    for(i=front;i<rear;i++)
    printf("%d ", deque[i]);
    printf("\n");
    num=N;
    while (num--)
    {
        scanf("%d", &y);
        front--;
        deque[front]=y;
    }
    rear--;
    rear--;
    rear--;
    for(i=front;i<rear;i++)
    printf("%d ", deque[i]);
    printf("\n");  
    return 0;
}