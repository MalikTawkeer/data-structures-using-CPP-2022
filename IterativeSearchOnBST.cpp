/* implementation of  iterative search in BST
created by : malik tawkeer
dated: 25/08/2022
time:1:34pm
at: MA boys hostel
*/
#include<iostream>
using namespace std;

//Making internal structure of Node 
class Node 
{
    public:
    int data;
    Node*left;
    Node*right;

    //constructor to initilize objects
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

//function to create binary search tree
void createBST(Node *&root , int val)
{
    Node *tempRoot = root, *prevNode;
    if(root == NULL)
    {
        root = new Node(val);
        return;
    }

    while(tempRoot != NULL)
    {
        prevNode = tempRoot;//stores previous nodes address
        if(val > tempRoot->data)
        {
            tempRoot = tempRoot->right;
        }else{
            tempRoot = tempRoot->left;
        }
    }

    //leaf node condition
    if(val > prevNode->data)
    {
        prevNode->right = new Node(val);
    }else{
        prevNode->left = new Node(val);
    }
}

//iterative searching code .
void searchBST(Node *root , int key)
{
    Node *tempRoot = root;
    if(root == NULL)
    {
        return;
    }
    while(tempRoot != NULL)
    {
        if(key == tempRoot->data)
        {
        cout<<"Key Found"<<endl;
        return;
        }
        if(key > tempRoot->data)
        {
            tempRoot = tempRoot->right;
        }else{
            tempRoot = tempRoot->left;
        }
    }
    cout<<endl<<"Key Not Found!!"<<endl;
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

    searchBST(root,6);
}