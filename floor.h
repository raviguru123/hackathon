#ifndef FLOOR_H_INCLUDED
#define FLOOR_H_INCLUDED
#define INVALID_VALUE -10000
class node
{
public:
    int key;
    node *left;
    node *right;
};

node * newNode(int key)
{
    node *newnode=new node();
    newnode->key=key;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}


int floor(node *root,int value)
{
    if(root==NULL)
        return INVALID_VALUE;
    else if(root->key==value)
        return root->key;
    else if(root->key<value)
    {
        int floorvalue=floor(root->right,value);
        if(floorvalue==INVALID_VALUE)
            return root->key;
        return floorvalue;
    }



    return floor(root->left,value);


}
#endif // FLOOR_H_INCLUDED
