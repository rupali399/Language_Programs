#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int * arr;
};

int isFull(struct stack * ptr)
{
    if(ptr -> top == ptr -> size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct stack * ptr)
{
    if(ptr -> top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack * ptr , int val)
{
    if(isFull(ptr))
    {
        printf("stack overflow\n");
    }
    else
    {
        ptr -> top ++;
        ptr -> arr[ptr -> top] = val;
    }
}

int pop(struct stack * ptr)
{
    if(isEmpty(ptr))
    {
        printf("stack underflow ! cannot pop from the stack\n");
        return -1;
    }
    else
    {
        int val = ptr -> arr[ptr -> top];
        ptr -> top = ptr -> top - 1;
        return val;
    }
}

int peek(struct stack * s, int i)
{
    int ArrayInd = s -> top - i + 1;
    if(ArrayInd < 0)
    {
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else
    {
        return s -> arr[ArrayInd];
    }
}


int main()
{
    struct stack * s;
    s -> size = 10;
    s -> top = -1;
    s -> arr = (int*)malloc(s -> size * sizeof(int));

    printf("Before pushing , Full\n", isFull(s));
    printf("Before pushing , Empty\n", isEmpty(s));

    push(s, 26);
    push(s, 5);
    push(s, 12);
    push(s, 29);
    push(s, 12);
    push(s, 1);
    push(s, 19);
    push(s, 11);
    push(s, 4);
    push(s, 18);    

    printf("After pushing , Full\n", isFull(s));
    printf("After pushing , Empty\n", isEmpty(s));

    printf("popped %d from the stack \n", pop(s)); 
    printf("popped %d from the stack \n", pop(s)); 

    //Printing values from the stack

    for(int j = 1; j < s -> top + 1; j ++)
    {
    printf("The value at position %d is : %d \n",j, peek(s, j));
    }

    return 0;
}