//Stacks
#include<stdio.h>
int main()
{
    int N, top, i, x, y;
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
            case 1: scanf("%d", &y);
                    stack[top]=y;
                    top++;
                    break;
            case 2: top--;
                    break;
            case 0: for(i=0;i<top;i++)
                    printf("%d ", stack[i]);
                    printf("\n");
        }
    }
    return 0;
}