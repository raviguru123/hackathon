#include <iostream>
#include "floor.h"
#include "ceil.h"
using namespace std;

int main()
{
    node *root = newNode(8);

    root->left = newNode(4);
    root->right = newNode(12);

    root->left->left = newNode(2);
    root->left->right = newNode(6);

    root->right->left = newNode(10);
    root->right->right = newNode(14);;

    for(int i = 0; i <16; i++)
        cout<<i<<" "<<ceil(root, i)<<endl;

        cout<<"ceil start from here"<<endl;


    return 0;
    cout << "Hello world!" << endl;
    return 0;
}
