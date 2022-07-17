#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlisttraversal(struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf("element is %d\n", ptr -> data);
        ptr = ptr -> next;
    }
}

//Case1 : insert at first
// struct Node *insertAtFirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
   
//     ptr -> next = head;
//     ptr -> data = data;

//     return ptr;
// }

// case2 : insert at between
// struct Node *insertAtBetween(struct Node *head, int data, int index)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr -> data = data;

//     struct Node *p = head;
//     int i = 0;
//     while(i != index - 1)
//     {
//         p = p -> next;
//         i++;
//     }
//     ptr -> next = p -> next;
//     p -> next = ptr;
//     return head;
// }

// Case3 : insert at end
// struct Node *insertAtEnd(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;
//     ptr -> data = data;

//     while(p -> next != NULL)
//     {
//         p = p -> next;
//     }
//     p -> next = ptr;
//     ptr -> next = NULL;
//     return head;
// }

struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = data;
    ptr -> next = prevNode -> next;
    prevNode -> next = ptr;
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
    head-> data = 7;
    head-> next = Second;

    //link second and third node
    Second -> data = 11;
    Second -> next = Third;

    //Terminate the list at thrid node
    Third -> data = 99;
    Third -> next = NULL;
    
    printf("Linked list before insertion :\n ");
    linkedlisttraversal(head);

    // head = insertAtFirst(head, 26);
    // head = insertAtBetween(head, 26, 2);
    //head = insertAtEnd(head, 26);
    head = insertAfterNode(head, Second, 23);

    printf("Linked list after insertion :\n ");
    linkedlisttraversal(head);

     return 0;
}