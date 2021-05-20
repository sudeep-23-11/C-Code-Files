//Deques
#include<stdio.h>
int main()
{
    int N, front, rear, i, x, y;
    scanf("%d", &N);
    int deque[N];
    front=0;
    rear=0;
    printf("Press 1 to insert element to rear end\n");
    printf("Press 2 to delete element from rear end\n");
    printf("Press 3 to insert element to front end\n");
    printf("Press 4 to delete element from front end\n");
    printf("Press 0 to display elements of the deque\n");
    printf("Press -1 to exit\n");
    while(1)
    {
        scanf("%d", &x);
        if(x==-1)
        break;
        switch(x)
        {
            case 1: scanf("%d", &y);
                    if(rear==N)
                    rear=0;
                    deque[rear]=y;
                    rear++;
                    break;
            case 2: rear--;
                    if(rear==-1)
                    rear=N-1;
                    break;
            case 3: scanf("%d", &y);
                    front--;
                    if(front==-1)
                    front=N-1;
                    deque[front]=y;
                    break;
            case 4: if(front==N)
                    front=0;
                    front++;
                    break;
            case 0: if(front>rear)
                    {
                        for(i=front;i<N;i++)
                        printf("%d ", deque[i]);
                        for(i=0;i<rear;i++)
                        printf("%d ", deque[i]);
                        printf("\n");
                    }
                    else
                    {
                        for(i=front;i<rear;i++)
                        {
                            if(i==N)
                            i==0;
                            printf("%d ", deque[i]);
                        }
                        printf("\n");
                    }
        }
    } 
    return 0;
}