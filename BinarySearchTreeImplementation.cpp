/* Binary tree implementation
On 11-08-2022 ,Time: 5:44pm
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
        this->data = data;
        left=right=NULL;
    }
};

void creteTree(Node *&root, int data)
{
    Node *newNode = new Node(data);
    Node *tempRoot = root;
    Node *prevNode; // points to node where actaual node is to be inserted
    if(root == NULL)
    {
        root = newNode;
        return;
    }
    
    while(tempRoot != NULL)
    {
        prevNode = tempRoot;
        if(newNode->data > tempRoot->data)
        {
            tempRoot = tempRoot->right;
        }
        else
        {
            tempRoot = tempRoot->left;
        }
    }
    if(newNode->data >prevNode->data )
    {
        prevNode->right = newNode;
    }
    else
    {
        prevNode->left = newNode;
    }


}

void displayRightSubTree(Node *root)
{
    if(root == NULL)
    {
        cout<<"Empty !!"<<endl;
        return;
    }
    while(root != NULL)
    {
        cout<<"  "<<root->data;
        root = root->left;
    }
    cout<<"->NULL"<<endl;

}

int main()
{
    Node *root = NULL;
    creteTree(root,5);
    creteTree(root,1);
    creteTree(root,2);
    creteTree(root,0);
    creteTree(root,10);
    creteTree(root,20);
    creteTree(root,30);
    creteTree(root,25);
    creteTree(root,15);    

    displayRightSubTree(root);

    //cout<<"1. "

}