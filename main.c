#include <stdio.h>
#include <stdlib.h>
#include "bst.h"
#include "include.h"
#include "stack.h"

int main(int argc, char *argv[])
{
    BST *root = NULL;

    root = Init(8);

    Add(root, 10);
    Add(root, 6);

    Show(root);

    Free(root);

    return 0;
}
