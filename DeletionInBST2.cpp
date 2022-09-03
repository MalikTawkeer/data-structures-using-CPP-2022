//p2 deletion in bst
// OK TESTED
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

//create BST
void createBST(Node* &root, int data)
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
        else{
            return;
        }
    }
    if(data > prevNode->data)
    {
        prevNode->right = new Node(data);
    }
    if(data <= prevNode->data)
    {
        prevNode->left = new Node(data);
    }
}

// inoder teraversal Left-Root-Right
void inOrderTraversal(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

//function code to find inOrder successor of any node
Node* inOrderSuccessor(Node* root)
{
    Node* current = root;
    while(current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

//deletion in BST
Node* deleteIntoBST(Node* root, int key)
{
    if(key > root->data)
    {
        root->right = deleteIntoBST(root->right, key);
    }
    else if (key < root->data){
        root->left = deleteIntoBST(root->left,key);
    }
    else
    {
        if(root->left == NULL)//if node has one child -> it may or may not be a right child
        {
            Node* rightNode = root->right;
            delete root;
            return rightNode;
        }else if(root->right == NULL)//if node has one child -> it may or may not be a left child 
        {
            Node* leftNode = root->left;
            delete root;
            return leftNode;
        }
            Node* inorderSuccNode = inOrderSuccessor(root->right);
            root->data = inorderSuccNode->data;
            root->right = deleteIntoBST(root->right, inorderSuccNode->data);//func call to delete orginal inorderSuccessor Node
            
    }
    return root;
}


int main()
{
    Node* root=NULL;

    createBST(root,50);
    createBST(root,60);
    createBST(root,65);
    createBST(root,55);
    createBST(root,52);
    createBST(root,30);
    createBST(root,40);
    createBST(root,35);
    createBST(root,38);
    createBST(root,25);
    createBST(root,45);
    createBST(root,42);
    createBST(root,58);
    createBST(root,62);
    createBST(root,70);

    cout<<"T-1    ";
    inOrderTraversal(root);
    cout<<endl;

    cout<<"T-2    ";
    deleteIntoBST(root, 35);
    inOrderTraversal(root);
    cout<<endl;

    cout<<"T-3:    ";
    deleteIntoBST(root, 42);
    inOrderTraversal(root);
    cout<<endl;
    cout<<"T-4:    ";
    deleteIntoBST(root, 40);
    inOrderTraversal(root);
    return 0;
}