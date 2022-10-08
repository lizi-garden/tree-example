#ifndef _STACK_H
#define _STACK_H

typedef struct stack
{
    int *end;
    unsigned int length;
    unsigned int remain;
} Stack;

Stack* Init_stack(unsigned int length);

void Push_stack(Stack *st, int data);

int Pop_stack(Stack *st);

void Free_stack(Stack *st);

#endif
