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

struct node *search(struct node *root, int key)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(key == root -> data)
    {
        return root;
    }
    else if(key < root -> data)
    {
        return search(root -> left, key);
    }
    else
    {
        return search(root -> right, key);
    }
};

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

    struct node *n = search(p, 4);
    if(n != NULL)
    {
        printf("found : %d", n -> data);
    }
    else
    {
        printf("element not found");
    }
    return 0;
}