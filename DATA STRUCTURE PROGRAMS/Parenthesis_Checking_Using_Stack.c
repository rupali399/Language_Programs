#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    char * arr;
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

char pop(struct stack * ptr)
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

int parenthesisMatch(char * exp)
{
    struct stack *s;
    s -> size = 100;
    s -> top = -1;
    s -> arr = (char*)malloc(s -> size * sizeof(char));

    for(int i = 0; exp[i] != '\0'; i ++)
    {
        if(exp[i] == '(')
        {
            push(s, '(');
        }
        else if(exp[i] == ')')
        {
            if(isEmpty(s))
            {
                return 0;
            }
            pop(s);
        }
    }
    if(isEmpty(s))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    char * exp = "(8)*(9)";

    if(parenthesisMatch(exp))
    {
        printf("The paranthesis is matching\n");
    }
    else
    {
        printf("The paranthesis is not matching\n");
    }

    return 0;
}