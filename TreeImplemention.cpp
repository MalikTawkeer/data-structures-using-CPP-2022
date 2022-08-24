// tree implementation
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
        this -> data = data;
        right = NULL;
    }
};

void createTree(Node *&root, int data)
{
    Node *newNode = new Node(data);
    Node *tempRoot = root,*prevNode;
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

    if(newNode ->data > prevNode->data)
    {
        prevNode->right = newNode;
    }
    else 
    {
        prevNode->left = newNode;
    }

}

void displayLeftNodes(Node *root)
{
    while (root != NULL)
    {
        
        cout<<root->data<<"<-"<<endl;
        root = root->left;
        
    }
}

int main()
{
    Node *root = NULL;
    createTree(root,10);
    createTree(root,5);
    createTree(root,2);
    createTree(root,3);
    createTree(root,1);
    createTree(root,0);
    createTree(root,-89);
    createTree(root,12);
    createTree(root,30);
    

    displayLeftNodes(root);

}