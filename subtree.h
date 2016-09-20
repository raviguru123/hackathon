#ifndef SUBTREE_H_INCLUDED
#define SUBTREE_H_INCLUDED
using namespace std;
class node
{
public:
    int key;
    node *left,*right;
};

node * newNode(int key)
{
    node *newnode=new node();
    newnode->key=key;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

void preorder(node *root,string &str)
{
    if(root==NULL)
        return;
    str+=to_string(root->key)+"&";
    preorder(root->left,str);
    preorder(root->right,str);

}

void inorder(node *root,string &str)
{
    if(root==NULL)
    return;

    inorder(root->left,str);
    str+=to_string(root->key)+"&";
    inorder(root->right,str);
}

void checkSubtree(node *root1,node *root2){
string preorder1="",preorder2="",inorder1="",inorder2="";
    preorder(root1,preorder1);
    inorder(root1,inorder1);

    preorder(root2,preorder2);
    inorder(root2,inorder2);

    if(preorder2.find(preorder1)!=string::npos&&inorder2.find(inorder1)!=string::npos)
    {
        cout<<"first tree is subset of another tree"<<endl;
    }
    else
    {
        cout<<"first tree is not exist"<<endl;
    }
}

#endif // SUBTREE_H_INCLUDED
