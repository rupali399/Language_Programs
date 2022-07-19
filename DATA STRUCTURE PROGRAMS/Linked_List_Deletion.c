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

//Case1 : Delete at first
// struct Node *deleteAtFirst(struct Node *head)
// {
//     struct Node *p = head;
//     head = head -> next;
//     free(p);
//     return head;
// }

//Case2 : Delete at between
// struct Node *deleteAtIndex(struct Node *head, int index)
// {
//     struct Node *p = head;
//     struct Node *q = head -> next;

//     for(int i = 0; i < index - 1; i++)
//     {
//         p = p -> next;
//         q = q -> next;
//     }

//     p -> next = q -> next;
//     free(q);
//     return(head);
// }

//Case3 : Delete at end
// struct Node *deleteAtEnd(struct Node *head)
// {
//     struct Node *p = head;
//     struct Node *q = head -> next;
    
//     while(q -> next != NULL)
//     {
//         p = p -> next;
//         q = q -> next;
//     }

//     p -> next = NULL;
//     free(q);
//     return head;
// }

//Case4 : Delete at Value
struct Node *deleteAtValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head -> next;
    while(q -> data != value && q -> next != NULL)
    {
        p = p -> next;
        q = q -> next;
    }
    if(q -> data == value)
    {
        p -> next = q -> next;
    }
    free(q);
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 26;
    head -> next = second;

    second -> data = 12;
    second -> next = third;

    third -> data = 29;
    third -> next = fourth;

    fourth -> data = 5;
    fourth -> next = NULL;

    printf("Linked list before Deletion :\n ");
    linkedlisttraversal(head); 

    // head = deleteAtFirst(head);
    // head = deleteAtIndex(head, 2);
    // head = deleteAtEnd(head);
     head = deleteAtValue(head, 29);

    printf("Linked list after Deletion :\n ");
    linkedlisttraversal(head); 

    return 0;
}