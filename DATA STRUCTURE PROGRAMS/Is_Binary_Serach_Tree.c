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
        printf("%d\t", root -> data);
        inorder(root -> right);
    }
}

int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if(root != NULL)
    {
        if(!isBST(root -> left))
        {
            return 0;
        }
        if(prev != NULL && root -> data <= prev -> data)
        {
            return 0;
        }
        prev = root;
        return isBST(root -> right);
    }
    else
    {
        return 1;
    }
}

int main()
{
    /*           6
                / \
               4   8
              /  \
             2   5    */
    //constructing the root node using function (Recommended)
    struct node *p = createNode(6);
    struct node *p1 = createNode(4);
    struct node *p2 = createNode(8);
    struct node *p3 = createNode(2);
    struct node *p4 = createNode(5);

    //Linking the root node with left and right children
    p -> left = p1;
    p -> right = p2;
    p1 -> left = p3;
    p1 -> right = p4;

    inorder(p);
    printf("\n");
    //printf("\n%d",isBST(p));
    if(isBST(p))
    {
        printf("This is a bst");
    }
    else
    {
        printf("This is not a bst");
    }

    return 0;
}