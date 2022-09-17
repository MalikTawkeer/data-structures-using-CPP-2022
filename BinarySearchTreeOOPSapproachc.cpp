// binary search tree implementation by using OOP's approach
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

class BST
{
    public:
    //declaring functions of BST class
    void insertIntoBST(Node*&, int);
    void inorderTraversal(Node*);// L-R-ROOT
    void preorderTraversal(Node*);//R-L-RIGHT
    void postorderTraversal(Node*);//L-RIGHT-ROOT
    Node* deleteNode(Node*&,int);
    void display(Node*);
    Node* inorderSuccessor(Node*);
};

//function code to insert into BST
void BST::insertIntoBST(Node *&root,int data)
{
    Node* tempRoot = root;
    Node* prevNode;
    if(root == NULL)
    {
        root = new Node(data);
        return;
    }


    while(tempRoot != NULL)
    {
        prevNode = tempRoot;
        if(data > tempRoot->data)
        {
            tempRoot = tempRoot->right;
        }else if(data < tempRoot->data)
        {
            tempRoot = tempRoot->left;
        }
    }

    if(data > prevNode->data)
    {
        prevNode->right = new Node(data);
    }
    else if(data < prevNode->data)
    {
        prevNode->left = new Node(data);
    }
}

//inorder traversal code
void BST::inorderTraversal(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<"  ";
    inorderTraversal(root->right);
    
}

//preorder traversal code..
void BST::preorderTraversal(Node*root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

//postorder traversal code...
void BST::postorderTraversal(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    //l-right-root
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}

//inorder successor function code
Node* BST::inorderSuccessor(Node* root)
{
    Node* curr = root;
    if(root==NULL)
    {
        return NULL;
    }
    while(curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

//delete node in BST
Node* BST::deleteNode(Node* &root,int key)
{
    if(root == NULL)
    {
        cout<<"Nothing to delete here, BST is empty"<<endl;
        return NULL;
    }
    if(key > root->data)
    {
        root->right = deleteNode(root->right,key);
    }else if(key < root->data)
    {
        root->left = deleteNode(root->left,key);
    }else{
        if(root->left == NULL)
        {
            Node* rightNode = root->right;
            delete root;
            return rightNode;
        }else if(root->right == NULL)
        {
            Node* leftRoot = root->left;
            delete root;
            return leftRoot;
        }
        Node* inorderSoccessorNode = inorderSuccessor(root->right);
        root->data = inorderSoccessorNode->data;
        root->right = deleteNode(root->right,inorderSoccessorNode->data);
    }
    return root;
}

int main()
{
    Node* root = NULL;
    BST bst_tree;

    while(1)
    {
        int choice;
        cout<<endl;
        cout<<"1 insert into BST"<<endl;
        cout<<"2 in-order Traversal"<<endl;
        cout<<"3 pre-order Traversal"<<endl;
        cout<<"4 post-order Traversal"<<endl;
        cout<<"5 delete into BST"<<endl;
        cout<<"6 to exit"<<endl;

        cout<<"ENTER UR CHOICE!!:  ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            int data;
            cout<<"Enter Data to be inserted into BST:-  ";
            cin>>data;
            bst_tree.insertIntoBST(root,data);
            break;

            case 2:
            cout<<"*****IN-ORDER TRAVERSAL:-  "<<endl;
            bst_tree.inorderTraversal(root);
            break;

            case 3:
            cout<<"*****PRE-ORDER TRAVERSAL:-  "<<endl;
            bst_tree.preorderTraversal(root);
            break;

            case 4:
            cout<<"*****POST-ORDER TRAVERSAL:-  "<<endl;
            bst_tree.postorderTraversal(root);
            break;

            case 5:
            int key;
            cout<<"Enter key to be deleted from BST "<<endl;
            cin>>key;
            bst_tree.deleteNode(root,key);
            break;

            case 6:
            exit(0);
            default :
            cout<<"OOPS! wrong choice!!"<<endl;
            
        }
    }
    return 0;

}