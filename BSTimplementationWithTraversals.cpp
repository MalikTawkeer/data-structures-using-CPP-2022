// BST implementation 
// with Traversals
/* Given tree is below
            10
           /  \
          6    15
         / \   / \
        N   8  N  20
                    \
                     25 
                     / \
                   22   30
                   */
#include<iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

// create binary search treee
void createBinarySearchTree(Node *&root,int data)
{
    Node *tempRoot = root;
    Node *prevNode;
    if(root == NULL)
    {
        Node *root = new Node(data);
        return;
    }

    while(tempRoot != NULL)
    {
        prevNode = tempRoot;
        if(data > tempRoot->data)
        {
            tempRoot = tempRoot->right;
        }
        else{
            tempRoot = tempRoot->left;
        }
    }

    if(data > prevNode->data)
    {
        prevNode->right = new Node(data);
    }
    else
    {
        prevNode->left = new Node(data);
    }
}


//preorder traversal
int preOrderTraversal(Node *root)
{
    if(root == NULL)
    {
        cout<<"NULL";
        return 0;
    }
    // ROOT-LEFT -RIGHT
    cout<<root->data<<" ,";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

int main()
{
    Node *root = NULL;
    int data;

    while(1)
    {
        int choice;
        cout<<"*********MENU FOR BST************"<<endl;
        cout<<"1 for insert into BST: "<<endl;
        cout<<"2 for preorder Traversal of BST: "<<endl;
        cout<<"3 for exit"<<endl;;
        cout<<"Enter Choice:-  ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
            cout<<"Enter data:-  ";
            cin>>data;
            createBinarySearchTree(root,data);
            break;
            }

            case 2:
            
                preOrderTraversal(root);
                break;
            
            default:
            exit(0);
        }

        
    }
    return 0;
}
