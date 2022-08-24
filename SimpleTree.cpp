// simple tree 
#include<iostream>
using namespace std;

class TreeNode
{
    public:
    TreeNode *left;
    int data;
    TreeNode *right;

    TreeNode(int data)
    {
        left = NULL;
        this->data = data;
        right = NULL;
    }
};

void createTree(TreeNode *&root , int data)
{
    TreeNode *newNode =new TreeNode(data);

    if(root == NULL)
    {
        root = newNode;
        return;
    }
    if(data > root->data )
    {
        root->right = newNode;
        return;
    }
    if(data < root->data)
    {
        root->left = newNode;
        return;
    }
}

void display(TreeNode *root)
{
   cout<<"  root = "<<root->data<<endl;
   cout<<"left node= "<<root->left->data<<"     "<<"right node="<<root->right->data<<endl;
}
int main()
{
    TreeNode *root = NULL;
    createTree(root,12);
    createTree(root,9);
    createTree(root,13);
    display(root);
}