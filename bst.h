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

BST* Init_bst(int data);

bool Add_bst(BST *root, int data);

void Show_bst(BST *root);

bool Delete_bst(BST *root, int data);

void Free_bst(BST *root);

#endif
