#include "bst.h"
#include <stdio.h>
#include <stdlib.h>

BST* Init(int data)
{
    BST *root = NULL;

    root = (BST*)malloc(sizeof(BST));

    root->left = NULL;
    root->right = NULL;
    root->data = data;

    return root;
}

bool Add(BST *root, int data)
{
    BST *new = NULL;
    BST *pnode = root;

    while((NULL != pnode->left)&&(NULL != pnode->right))
    {
        /* 总让右节点大于左节点 */
        if(data > pnode->data)
        {
            pnode = pnode->right;
        }
        else if(data < pnode->data)
        {
            pnode = pnode->left;
        }
        else
        {
            printf("You can't add the same data repeatedly\n");
            return false;
        }
    }

    new = (BST*)malloc(sizeof(BST));

    if(data > pnode->data)
    {
        pnode->right = new;
    }
    else if(data < pnode->data)
    {
        pnode->left = new;
    }
    else
    {
        printf("You can't add the same data repeatedly\n");
        return false;
    }

    new->data = data;
    new->left = NULL;
    new->right = NULL;

    return true;
}

bool Delete(BST *root, int data)
{
    return true;
}

void Show(BST *root)
{
    static int count = 1;

    if(NULL != root->right)
        Show(root->right);

    if(NULL != root->left)
        Show(root->left);

    if(NULL != root)
    {
        printf("NO:%d\t%d\n", count, root->data);
        count++;
    }

    return;
}

void Free(BST *root)
{
    if(NULL != root->right)
        Free(root->right);

    if(NULL != root->left)
        Free(root->left);
    
    free(root);
    root = NULL;

    return;
}
