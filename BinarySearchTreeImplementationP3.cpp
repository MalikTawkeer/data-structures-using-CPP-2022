// Binary search tree implementaion
// 5,1,2,3,9,8,7
#include<iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void createBST(Node *&root,int val)
{
    Node *tempRoot = root;
    Node *prevNode;
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

void inOrderTraversal(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    inOrderTraversal(root->left);// LEFT
    cout<<" "<<root->data;// ROOT
    inOrderTraversal(root->right); // RIGHT
}

//preorder traveral
void preorderTraversal(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

//postorder traversal (LEFT-RIGHT-ROOT)
void postOrderTraversal(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    postOrderTraversal(root->left); // LEFT
    postOrderTraversal(root->right); // RIGHT
    cout<<root->data<<" "; // ROOT
}

void searchBST(Node *root)
{
    int key;
    cout<<endl;
    cout<<"Enter a key to be searched in BST: ";
    cin>>key;
    if(root == NULL)
    {
        return;
    }
    while(root != NULL)
    {
        if(key == root->data)
        {
            cout<<endl;
            cout<<"KEY FOUND SUCCESSFULLY "<<endl;
            return;
        }
        if(key > root->data)
        {
            root = root->right;
        }else{
            root = root->left;
        }
    }
    cout<<"KEY NOT FOUND!!"<<endl;
}

int main()
{
    Node *root = NULL;
// MENU STARTS HERE ............
    cout<<"******************************MENU**************************************"<<endl;
    cout<<" press 1 insert into BST "<<endl;
    cout<<" press 2 search into BST "<<endl;
    cout<<" press 3 delete into BST "<<endl;
    cout<<" press 4 inOrder Traversal"<<endl;
    cout<<" press 5 preOrder Traversal"<<endl;
    cout<<" press 6 postOrder Traversal"<<endl;

    while(true)
    {
       
        int choice;
        int d;
        cout<<endl<<"Enter a choice:- "<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
            cout<<endl;
            cout<<"Enter data to be inserted into BST: ";
            cin>>d;
            cout<<endl;
            createBST(root,d);
            break;
            
            case 2:
            searchBST(root);
            break;

            case 4:
            cout<<endl<<"INORDER_ORDER TRAVERSAL:- "<<endl;
            inOrderTraversal(root);
            break;

            case 5:
            cout<<endl<<"PRE_ORDER TRAVERSAL:- "<<endl;
            preorderTraversal(root);

            case 6:
            cout<<endl<<"POST_ORDER TRAVERSAL:- "<<endl;
            postOrderTraversal(root);
            break;
            default:
            exit(0);
        }
        
    }
    return 0;
}