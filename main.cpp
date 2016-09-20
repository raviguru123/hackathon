#include <iostream>
#include <string>
#include "subtree.h"
using namespace std;



int main (void)
{
    node *root1=newNode(10);
    root1->left=newNode(5);
    root1->left->left=newNode(8);
    root1->right=newNode(11);

    node *root2=newNode(10);
    root2->left=newNode(9);
    root2->left->left=newNode(8);
    root2->right=newNode(11);
    root2->right->right=newNode(12);
    checkSubtree(root1,root2);
    return 0;
}
