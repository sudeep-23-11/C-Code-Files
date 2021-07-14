//DoublyLinkedLists
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int key;
    struct Node *next;
    struct Node *prev;
};
void insertNodeBegin(struct Node **start, int key)
{
    struct Node *last=(*start)->prev;
    struct Node *tempNode=(struct Node *)malloc(sizeof(struct Node));
    tempNode->key=key;
    tempNode->next=*start;
    tempNode->prev=last;
    last->next=tempNode;
    (*start)->prev=tempNode;
    *start=tempNode;
}
void insertNodeAfter(struct Node **start, int key1, int key2)
{
    struct Node *tempNode1=(struct Node *)malloc(sizeof(struct Node));
    tempNode1->key=key1;
    struct Node *tempNode2=*start;
    while(tempNode2->key!=key2)
    tempNode2=tempNode2->next;
    struct Node *next=tempNode2->next;
    tempNode2->next=tempNode1;
    tempNode1->prev=tempNode2;
    tempNode1->next=next;
    next->prev=tempNode1;
}
void insertNodeEnd(struct Node **start, int key)
{
    if(*start==NULL)
    {
        struct Node* tempNode=(struct Node *)malloc(sizeof(struct Node));
        tempNode->key=key;
        tempNode->next=tempNode->prev=tempNode;
        *start=tempNode;
        return;
    }
    struct Node *last=(*start)->prev;
    struct Node *tempNode=(struct Node *)malloc(sizeof(struct Node));
    tempNode->key=key;
    tempNode->next=*start;
    (*start)->prev=tempNode;
    tempNode->prev=last;
    last->next=tempNode;
}
void displayListForward(struct Node *node)
{
    struct Node *tempNode=node;
    while(tempNode->next!=node)
    {
        printf("%d ", tempNode->key);
        tempNode=tempNode->next;
    }
    printf("%d ", tempNode->key);
}
void displayListReverse(struct Node *node)
{
    struct Node *last=node->prev;
    struct Node *tempNode=last;
    while(tempNode->prev!=last)
    {
        printf("%d ", tempNode->key);
        tempNode=tempNode->prev;
    }
    printf("%d ", tempNode->key);
}
void deleteNode(struct Node **start, int key)
{
    if (*start==NULL)
    return;
    struct Node *tempNode1=*start;
    struct Node *prevNode=NULL;
    while(tempNode1->key!=key)
    {
        prevNode=tempNode1;
        tempNode1=tempNode1->next;
    }
    if((tempNode1->next==*start)&&(prevNode==NULL))
    {
        (*start)=NULL;
        free(tempNode1);
        return;
    }
    if(tempNode1==*start)
    {
        prevNode=(*start)->prev;
        *start=(*start)->next;
        prevNode->next=*start;
        (*start)->prev=prevNode;
        free(tempNode1);
    }
    else if(tempNode1->next==*start)
    {
        prevNode->next=*start;
        (*start)->prev=prevNode;
        free(tempNode1);
    }
    else
    {
        struct Node* tempNode2=tempNode1->next;
        prevNode->next=tempNode2;
        tempNode2->prev=prevNode;
        free(tempNode1);
    }
}
int main()
{
    int x, y;
	struct Node *start=NULL;
	printf("Press 1 to insert element at the beginning in the list\n");
    printf("Press 2 to insert element at a position in the list\n");
	printf("Press 3 to insert element at the end in the list\n");
    printf("Press 4 to delete element from the list\n");
    printf("Press 0 to display elements of the list in forward and reverse order\n");
    printf("Press -1 to exit\n");
    while(1)
    {
        scanf("%d", &x);
        if(x==-1)
        break;
        switch(x)
        {
            case 1: scanf("%d", &y);
					insertNodeBegin(&start, y);
                    break;
            case 2: scanf("%d", &y);
					insertNodeAfter(&start, y, 5);
                    break;
			case 3: scanf("%d", &y);
					insertNodeEnd(&start, y);
					break;
			case 4: scanf("%d", &y);
					deleteNode(&start, y);
					break;
			case 0: printf("Forward Order\n");
                    displayListForward(start);
                    printf("\n");
                    printf("Reverse Order\n");
                    displayListReverse(start);
                    printf("\n");
		}
	}
	return 0;
}