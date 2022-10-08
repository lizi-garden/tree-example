#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack* Init_stack(unsigned int length)
{
    Stack *st = NULL;
    st = (Stack*)malloc(sizeof(Stack));

    st->length = length;
    st->remain = length;
    st->end = (int*)malloc(length * sizeof(int));
    st->end += length - 1;

    return st;
}

void Push_stack(Stack *st, int data)
{
    if(st->remain > st->length)
    {
        printf("The stack is full\n");
        return;
    }
    else
    {
        st->remain--;
        *st->end = data;
        st->end--;
        return;
    }
}

int Pop_stack(Stack *st)
{
    if(st->remain <= 0)
    {
        printf("The stack is empty\n");
        return -1;
    }
    else
    {
        st->end++;
        st->remain++;

        return *st->end;
    }
}

void Free_stack(Stack *st)
{
    free(st);
    return;
}

