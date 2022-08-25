/* implementation of  iterative search in BST
created by : malik tawkeer
dated: 25/08/2022
time:1:34pm
at: MA boys hostel
*/
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        right = left = NULL;
    }

};

// crearte BST
void createBST(Node *&root , int val)
{
    Node *tempRoot = root,*prevNode;
    if(root == NULL)
    {
        root = new Node(val);
        return;
    }

    while(tempRoot != NULL)
    {
        prevNode = tempRoot;
        if(val > tempRoot->data)
        {
            tempRoot = tempRoot->right;
        }else{
            tempRoot = tempRoot->left;
        }
    }

     if(val > prevNode->data)
    {
        prevNode->right = new Node(val);
    }else{
        prevNode->left = new Node(val);
    }   
}

//recursive search
Node* searchBST(Node *root , int key)
{
    if(root == NULL)
    {
        cout<<"d";
        return NULL;
    }
    if(root->data == key)
    {
        cout<<"Key Found"<<endl;
        return root;
    }
    if( root->data > key)
    {
        return searchBST(root->left,key);
    }
        return searchBST(root->right,key);
}

int main()
{
    Node *root = NULL;

    createBST(root,4);
    createBST(root,3);
    createBST(root,1);
    createBST(root,5);
    createBST(root,9);
    createBST(root,5);
    createBST(root,6);
    
    searchBST(root,9);
return 0;

}