#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;  //creating a node pointer
    n = (struct node *)malloc(sizeof(struct node));   //Allocating memory in the heap
    n -> data = data;  //setting the data
    n -> left = NULL;  //setting the left and right children to null
    n -> right = NULL;  //setting the left and right children to null
    return n;  //finall return the created node
}

void inorder(struct node *root)
{
    if(root != NULL)
    {        
        inorder(root -> left);
        printf("%d\t",root -> data);
        inorder(root -> right);
    }
}

struct node *searchIter(struct node *root, int key)
{
    while(root != NULL)
    {
        if(key == root -> data)
        {
            return root;
        }
        else if(key < root->data)
        {
            root = root -> left;
        }
        else
        {
            root = root -> right;
        }
    }
    return NULL;
}

void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while(root != NULL)
    {
        prev = root;
        if(key == root -> data)
        {
            printf("cannot insert %d, already in BST", key);
            return;
        }
        else if(key < root -> data)
        {
            root = root -> left;
        }
        else
        {
            root = root -> right;
        }
    }
    struct node *new = createNode(key);
    if(key < prev -> data)
    {
        root -> left = new;
    }
    else
    {
        root -> right = new;
    }
}

struct node *inorderPredecessor(struct node * root)
{
    root = root -> left;
    while(root -> right != NULL)
    {
        root = root -> right;
    }
}

struct node *deleteNode(struct node *root, int value)
{
    struct node *ipre;

    if(root == NULL)
    {
        return NULL;
    }
    if(root -> left == NULL && root -> right == NULL)
    {
        free(root);
        return NULL;
    }
    //search for the node to be deleted
    if(value < root -> data)
    {
        root -> left = deleteNode(root -> left, value); 
    } 
    else if(value > root -> data)
    {
        root -> right = deleteNode(root -> right, value);
    }

    //deletion strategy
    else
    {
        ipre = inorderPredecessor(root);
        root -> data = ipre -> data;
        root -> left = deleteNode(root -> left, ipre -> data);
        return root;
    }
}

int main()
{
    /*           5
                / \
               3   8
              /  \
             2   4    */
    //constructing the root node using function (Recommended)
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(8);
    struct node *p3 = createNode(2);
    struct node *p4 = createNode(4);

    //Linking the root node with left and right children
    p -> left = p1;
    p -> right = p2;
    p1 -> left = p3;
    p1 -> right = p4;

    // struct node *n = searchIter(p, 4);
    // if(n != NULL)
    // {
    //     printf("Found : %d", n -> data);
    // }
    // else
    // {
    //     printf("Element not found");
    // }

    // insert(p, 7);
    // printf("%d", p -> right -> right -> data);

    inorder(p);
    deleteNode(p, 2);
    printf("\n");
    printf("| Data is %d |", p -> data);
    inorder(p);

    return 0;
}