#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

// void linkedlisttraversal(struct Node *ptr)
// {
//     while(ptr != NULL)
//     {
//         printf("element is %d\n", ptr -> data);
//         ptr = ptr -> next;
//     }
// }

void Reversedlinkedlisttraversal(struct Node *ptr)
{
    while(ptr -> next != NULL)
    {
        ptr = ptr -> next;
    }
    if(ptr -> next == NULL)
        {
            while(ptr -> prev != NULL)
            {
               printf("element is %d\n", ptr -> data); 
               ptr = ptr -> prev;
            }
            printf("element is %d\n", ptr -> data); 
        }
}

int main()
{
    struct Node *head;
    struct Node *Second;
    struct Node *Third;
    struct Node *Fourth;

    //Allocate memory for nodes in the linked list in heap
    head = (struct Node*)malloc(sizeof (struct Node));
    Second = (struct Node*)malloc(sizeof(struct Node));
    Third = (struct Node*)malloc(sizeof(struct Node));  
    Fourth = (struct Node *)malloc(sizeof(struct Node)); 

    //link first and second node
    head -> prev = NULL;
    head -> data = 7;
    head -> next = Second;

    //link second and third node
    Second -> prev = head;
    Second -> data = 11;
    Second -> next = Third;

    //link third and fourth node
    Third -> prev = Second;
    Third-> data = 99;
    Third-> next = Fourth;

    //Terminate the list at fourth node
    Fourth -> prev = Third;
    Fourth -> data = 300;
    Fourth -> next = NULL;
    
    //linkedlisttraversal(head);
    Reversedlinkedlisttraversal(head);

    return 0;
}