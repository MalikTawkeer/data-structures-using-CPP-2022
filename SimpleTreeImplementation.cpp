//Simple tree implementation
/* 
    TREE:-
            1
           / \
          2   3
         /
        4  
*/
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int preOrderTraversal(Node *root)
{
    if(root == NULL)
}

int main()
{
    Node *root = NULL;

    Node *root = new Node(1); // root node 
    root->left = new Node(2); // left child of root node 
    root->right = new Node(3); // right child of root node 

    root->left->left =  new Node(4); // left child of root node's left node

}