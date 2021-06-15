//AVLTrees
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int key, height;
    struct Node *left,  *right;
};
int getHeight(struct Node *N)
{
    if (N==NULL)
    return 0;
    else
    return (N->height);
}
int max(int a, int b)
{
    return (a > b)? a : b;
}
struct Node *newNode(int key)
{
    struct Node *node=(struct Node *)malloc(sizeof(struct Node));
    node->key=key;
    node->left=NULL;
    node->right=NULL;
    node->height=1;
    return node;
}
struct Node *rightRotate(struct Node *node)
{
    struct Node *tempNode1=node->left;
    struct Node *tempNode2=tempNode1->right;
    tempNode1->right=node;
    node->left=tempNode2;
    node->height=max(getHeight(node->left), getHeight(node->right))+1;
    tempNode1->height=max(getHeight(tempNode1->left), getHeight(tempNode1->right))+1;
    return tempNode1;
}
struct Node *leftRotate(struct Node *node)
{
    struct Node *tempNode1=node->right;
    struct Node *tempNode2=tempNode1->left;
    tempNode1->left=node;
    node->right=tempNode2;
    node->height=max(getHeight(node->left), getHeight(node->right))+1;
    tempNode1->height=max(getHeight(tempNode1->left), getHeight(tempNode1->right))+1;
    return tempNode1;
}
int getBalance(struct Node *node)
{
    if(node==NULL)
    return 0;
    else
    return (getHeight(node->left)-getHeight(node->right));
}
struct Node *insertNode(struct Node *node, int key)
{
    int b;
    if(node==NULL)
    return(newNode(key));
    if(key<node->key)
    node->left=insertNode(node->left, key);
    else if(key>node->key)
    node->right=insertNode(node->right, key);
    node->height=max(getHeight(node->left), getHeight(node->right))+1;
    b=getBalance(node);
    if((b>1)&&(key<node->left->key))
    return rightRotate(node);
    else if((b<-1)&&(key>node->right->key))
    return leftRotate(node);
    else if((b>1)&&(key>node->left->key))
    {
        node->left=leftRotate(node->left);
        return rightRotate(node);
    }
    else if((b<-1)&&(key<node->right->key))
    {
        node->right=rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}
struct Node *minValueNode(struct Node *node)
{
    struct Node* tempNode=node;
    tempNode=tempNode->left;
    return tempNode;
}
struct Node *deleteNode(struct Node *node, int key)
{
    int b;
    if(node==NULL)
    return node;
    if(key<node->key)
    node->left=deleteNode(node->left, key);
    else if(key>node->key )
    node->right=deleteNode(node->right, key);
    else
    {
        if((node->left==NULL)||(node->right==NULL))
        {
            struct Node *tempNode= node->left ? node->left : node->right;
            if (tempNode==NULL)
            {
                tempNode=node;
                tempNode=NULL;
            }
            else
            *node=*tempNode;
            free(tempNode);
        }
        else
        {
            struct Node *tempNode= minValueNode(node->right);
            node->key=tempNode->key;
            node->right=deleteNode(node->right, tempNode->key);
        }
    }
    node->height=max(getHeight(node->left), getHeight(node->right))+1;
    b=getBalance(node);
    if((b>1)&&(getBalance(node->left)>=0))
    return rightRotate(node);
    else if((b>1)&&(getBalance(node->left)<0))
    {
        node->left=leftRotate(node->left);
        return rightRotate(node);
    }
    else if((b<-1)&&(getBalance(node->right)<=0))
    return leftRotate(node);
    else if((b<-1)&&(getBalance(node->right)>0))
    {
        node->right=rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}
void preorderTraversal(struct Node *node)
{
    if(node!=NULL)
    {
        printf("%d ", node->key);
        preorderTraversal(node->left);
        preorderTraversal(node->right);
    }
}
int main()
{
    int x, y;
    struct Node *rootNode=NULL;
    printf("Press 1 to insert element to AVL Tree\n");
    printf("Press 2 to delete element from AVL Tree\n");
    printf("Press 0 for preorder traversal of the AVL Tree\n");
    printf("Press -1 to exit\n");
    while(1)
    {   
        scanf("%d", &x);
        if(x==-1)
        break;
        switch(x)
        {
            case 1: scanf("%d", &y);
                    rootNode=insertNode(rootNode, y);
                    break;
            case 2: scanf("%d", &y);
                    rootNode=deleteNode(rootNode, y);
                    break;
            case 0: preorderTraversal(rootNode);
                    printf("\n");
        }
    }
    return 0;
}