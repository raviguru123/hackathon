#ifndef CEIL_H_INCLUDED
#define CEIL_H_INCLUDED

#include "floor.h"
int ceil(node *root,int value)
{
    if(root==NULL)
        return INVALID_VALUE;
    else if(root->key==value)
        return root->key;
    else if(root->key<value)
        return ceil(root->right,value);

    int ceilvalue=ceil(root->left,value);
    return ceilvalue=ceilvalue<value?root->key:ceilvalue;

}

#endif // CEIL_H_INCLUDED
