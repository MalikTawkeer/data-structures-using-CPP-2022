// PREORDER TRAVERSAL ON SIMPLE TREE
/*       1
       /   \
      2     3
     / \   / \
    4   5 N   N
*/
#include<iostream>
using namespace std;

class Node
{
    public:
    Node *left;
    int data;
    Node *right;

    Node(int data)
    {
        left = NULL;
        this->data = data;
        right = NULL;
    }
};

int preOrderTraversal(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    cout<<root->data<<" ,";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" , ";

}

void inOrderTraversal(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" , ";
    inOrderTraversal(root->right);
}

int main()
{
    Node *root = new Node(1); // root node with val 1

    root->left = new Node(2);// left node of root
    root->right = new Node(3);// right node of root

    root->left->left = new Node(4);//left node of root's left node
    root->left->right = new Node(5);//right node of root's left node 

    cout<<"Pre-order traversal:- "<<endl;
    preOrderTraversal(root);
    
    cout<<endl;
    cout<<"Post-order traversal:- "<<endl;
    postOrderTraversal(root);

    cout<<endl;
    cout<<"Inorder Traversal:- "<<endl;
    inOrderTraversal(root);
    return 0;
}