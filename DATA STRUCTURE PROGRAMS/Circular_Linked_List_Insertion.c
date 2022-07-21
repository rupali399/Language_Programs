#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlisttraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element is %d\n",ptr -> data);
        ptr = ptr -> next;
    } while(ptr != head);
    
}

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node * ptr = (struct Node*)malloc(sizeof (struct Node));
    struct Node *p = head -> next;
    ptr -> data = data;
    while(p -> next != head)
    {
        p = p -> next;
    }

    // At this point p points to the last node of circular linked list

    p -> next =  ptr;
    ptr -> next = head;
    head =  ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *Second;
    struct Node *Third;

    //Allocate memory for nodes in the linked list in heap
    head = (struct Node*)malloc(sizeof (struct Node));
    Second = (struct Node*)malloc(sizeof(struct Node));
    Third = (struct Node*)malloc(sizeof(struct Node));   

    //link first and second node
    head -> data = 7;
    head -> next = Second;

    //link second and third node
    Second -> data = 11;
    Second -> next = Third;

    //Terminate the list at thrid node
    Third-> data = 99;
    Third-> next = head;
    
    printf("Linked list before insertion :\n ");
    linkedlisttraversal(head);

    insertAtFirst(head, 26);

    printf("Linked list after insertion :\n ");
    linkedlisttraversal(head);


    return 0;
}
