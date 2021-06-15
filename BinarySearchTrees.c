//BinarySearchTrees
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int key;
    struct Node *left, *right;
};
struct Node *newNode(int key)
{
    struct Node *tempNode=(struct Node *)malloc(sizeof(struct Node));
    tempNode->key=key;
    tempNode->left=NULL;
    tempNode->right=NULL;
    return tempNode;
}
struct Node *insertNode(struct Node *node, int key)
{
    if(node==NULL)
    return newNode(key);
    if(key<node->key)
    node->left=insertNode(node->left, key);
    else if(key>node->key)
    node->right=insertNode(node->right, key);
    return node;
}
struct Node *minValueNode(struct Node *node)
{
    struct Node *tempNode=node;
    tempNode=tempNode->left;
    return tempNode;
}
struct Node *deleteNode(struct Node *node, int key)
{
    if(node==NULL)
    return node;
    if(key<node->key)
    node->left=deleteNode(node->left, key);
    else if(key>node->key)
    node->right=deleteNode(node->right, key);
    else 
    {
        if(node->left==NULL)
        {
            struct Node *tempNode=node->right;
            free(node);
            return tempNode;
        }
        else if(node->right==NULL)
        {
            struct Node *tempNode=node->left;
            free(node);
            return tempNode;
        }
        struct Node *tempNode=minValueNode(node->right);
        node->key=tempNode->key;
        node->right=deleteNode(node->right, tempNode->key);
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
    printf("Press 1 to insert element to Binary Search Tree\n");
    printf("Press 2 to delete element from Binary Search Tree\n");
    printf("Press 0 for preorder traversal of the Binary Search Tree\n");
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