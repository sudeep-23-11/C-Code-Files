//SinglyLinkedLists
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int key;
	struct Node* next;
};
void insertNodeBegin(struct Node **headRef, int key)
{
	struct Node *tempNode=(struct Node *)malloc(sizeof(struct Node));
	tempNode->key=key;
	tempNode->next=(*headRef);
	*headRef=tempNode;
}
void insertNodeAfter(struct Node *prevNode, int key)
{
    struct Node *tempNode=(struct Node *)malloc(sizeof(struct Node));
    tempNode->key=key;
    tempNode->next=prevNode->next;
    prevNode->next=tempNode;
}
void insertNodeEnd(struct Node **headRef, int key)
{
    struct Node *tempNode=(struct Node *)malloc(sizeof(struct Node));
    struct Node *lastNode=*headRef;
    tempNode->key=key;
    tempNode->next=NULL;
    if(*headRef==NULL)
    {
       *headRef=tempNode;
        return;
    }
    while(lastNode->next!=NULL)
    lastNode=lastNode->next;
    lastNode->next=tempNode;
    return;
}
void deleteNode(struct Node **headRef, int key)
{
	struct Node *tempNode=*headRef, *prevNode;
    if(tempNode==NULL)
    return;
	if((tempNode!=NULL)&&(tempNode->key==key))
    {
		*headRef=tempNode->next;
		free(tempNode);
		return;
	}
	while((tempNode!=NULL)&&(tempNode->key!=key))
    {
		prevNode=tempNode;
		tempNode=tempNode->next;
	}
	prevNode->next=tempNode->next;
	free(tempNode);
}
void displayList(struct Node *node)
{
	while(node!=NULL)
	{
		printf("%d ", node->key);
		node=node->next;
	}
}
int main()
{
	int x, y;
	struct Node *head=NULL;
	printf("Press 1 to insert element at the beginning in the list\n");
    printf("Press 2 to insert element at a position in the list\n");
	printf("Press 3 to insert element at the end in the list\n");
    printf("Press 4 to delete element from the list\n");
    printf("Press 0 to display elements of the list\n");
    printf("Press -1 to exit\n");
    while(1)
    {
        scanf("%d", &x);
        if(x==-1)
        break;
        switch(x)
        {
            case 1: scanf("%d", &y);
					insertNodeBegin(&head, y);
                    break;
            case 2: scanf("%d", &y);
					insertNodeAfter(head->next, y);
                    break;
			case 3: scanf("%d", &y);
					insertNodeEnd(&head, y);
					break;
			case 4: scanf("%d", &y);
					deleteNode(&head, y);
					break;
			case 0: displayList(head);
                    printf("\n");
		}
	}
	return 0;
}