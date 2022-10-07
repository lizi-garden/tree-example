#ifndef _BST_H
#define _BST_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct bst
{
    int data;
    struct bst *left;
    struct bst *right;
} BST;

BST* Init(int data);

bool Add(BST *root, int data);

void Show(BST *root);

bool Delete(BST *root, int data);

void Free(BST *root);

#endif
