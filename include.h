#include "bst.h"
#include "stack.h"

#define Init(Y)     _Generic((Y), int : Init_bst, \
                         unsigned int : Init_stack)(Y)

#define Add(X, Y)   _Generic((X), BST* : Add_bst)(X, Y)

#define Show(X)     _Generic((X), BST* : Show_bst)(X)

#define Free(X)     _Generic((X), BST* : Free_bst, \
                                Stack* : Free_stack)(X)
