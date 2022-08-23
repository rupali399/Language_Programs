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

int main()
{
    //Constructing the root node
    // struct node *p;
    // p = (struct node *)malloc(sizeof(struct node));
    // p -> data = 1;
    // p -> left = NULL;
    // p -> right = NULL;

    //Constructing the second node
    // struct node *p1;
    // p1 = (struct node *)malloc(sizeof(struct node));
    // p1 -> data = 5;
    // p1 -> left = NULL;
    // p1 -> right = NULL;

    //Constructing the third node
    // struct node *p2;
    // p2 = (struct node *)malloc(sizeof(struct node));
    // p2 -> data = 5;
    // p2 -> left = NULL;
    // p2 -> right = NULL;

    //Linking the root node with left and right children
    // p -> left = p1;
    // p -> right = p2;

    //constructing the root node using function (Recommended)
    struct node *p = createNode(4);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(8);

    //Linking the root node with left and right children
    p -> left = p1;
    p -> right = p2;

    return 0;
}