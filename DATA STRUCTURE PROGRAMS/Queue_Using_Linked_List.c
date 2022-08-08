#include<stdio.h>
#include<stdlib.h>

struct Node * f = NULL;
struct Node * r = NULL;

struct Node
{
    int data;
    struct Nodde * next;
};

void linkedlisttraversal(struct Node *ptr)
{
    printf("Printing the element of this linked list\n");
    while(ptr != NULL)
    {
        printf("element is %d\n", ptr -> data);
        ptr = ptr -> next;
    }
}

void enqueue(int val)
{
    struct Node * n = (struct Node *)malloc(sizeof(struct Node));
    if(n == NULL)
    {
        printf("Queue is full\n");
    }
    else
    {
        n -> data = val;
        n -> next = NULL;
        if(f == NULL)
        {
            f = r = n;
        }
        else
        {
            r -> next = n;
            r = n;
        }
    }
}

int dequeue()
{
    int val = -1;
    struct Node * ptr = f;
    if(f == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        f = f -> next;
        val = ptr -> data;
        free(ptr);
    }
    return val;
}

int main()
{
    linkedlisttraversal(f);

    printf("Dequeuing element %d\n", dequeue());

    enqueue(29);
    enqueue(26);
    enqueue(12);
    enqueue(5);

    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());


    linkedlisttraversal(f);

    return 0;
}