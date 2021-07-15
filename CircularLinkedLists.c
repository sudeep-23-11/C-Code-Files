//CircularLinkedLists
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int key;
	struct Node *next;
};
struct Node *insertNodeEmpty(struct Node *last, int key)
{
	if(last!=NULL)
	return last;
	struct Node *tempNode=(struct Node *)malloc(sizeof(struct Node));
	tempNode->key=key;
	last=tempNode;
	last->next=last;
	return last;
}
struct Node *insertNodeBegin(struct Node *last, int key)
{
	if(last==NULL)
	return insertNodeEmpty(last, key);
	struct Node *tempNode=(struct Node *)malloc(sizeof(struct Node));
	tempNode->key=key;
	tempNode->next=last->next;
	last->next=tempNode;
	return last;
}
struct Node *insertNodeAfter(struct Node *last, int key1, int key2)
{
	if(last==NULL)
	return NULL;
	struct Node *tempNode1;
	struct Node *tempNode2;
	tempNode2=last->next;
	do
	{
		if(tempNode2->key==key2)
		{
			tempNode1=(struct Node *)malloc(sizeof(struct Node));
			tempNode1->key=key1;
			tempNode1->next=tempNode2->next;
			tempNode2->next=tempNode1;
			if(tempNode2==last)
			last=tempNode1;
			return last;
		}
		tempNode2=tempNode2->next;
	}
	while(tempNode2!=last->next);
}
struct Node *insertNodeEnd(struct Node *last, int key)
{
	if(last==NULL)
	return insertNodeEmpty(last, key);
	struct Node *tempNode=(struct Node *)malloc(sizeof(struct Node));
	tempNode->key=key;
	tempNode->next=last->next;
	last->next=tempNode;
	last=tempNode;
	return last;
}
struct Node *deleteNode(struct Node *last, int key)
{
    int i, count;
    i=0;
    count=0;
	struct Node *curNode=last;
    struct Node *prevNode=curNode;
    while(prevNode->next!=last) 
    {
        prevNode=prevNode->next;
        count++;
    }
    while(i<=count)
    {
        if(curNode->key==key)
        {
            if(curNode->next!=curNode)
            prevNode->next=curNode->next;
            else
            prevNode->next=NULL;
            if(curNode==last)
            last=prevNode->next;
            free(curNode);
            if(prevNode!=NULL) 
            curNode=prevNode->next;
            else
            curNode=NULL;
        }
        else 
        {
            prevNode=curNode;
            curNode=curNode->next;
        }
        i++;
    }
	return last;
}
void displayList(struct Node *node)
{
	struct Node *tempNode;
	tempNode=node->next;
	do
	{
		printf("%d ", tempNode->key);
		tempNode=tempNode->next;
	}
	while(tempNode!=node->next);
}
int main()
{
	int x, y;
	struct Node *last=NULL;
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
					last=insertNodeBegin(last, y);
                    break;
            case 2: scanf("%d", &y);
					last=insertNodeAfter(last, y, 5);
                    break;
			case 3: scanf("%d", &y);
					last=insertNodeEnd(last, y);
					break;
			case 4: scanf("%d", &y);
					last=deleteNode(last, y);
					break;
			case 0: displayList(last);
                    printf("\n");
		}
	}
	return 0;
}