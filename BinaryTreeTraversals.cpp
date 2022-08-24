// Binary tree traversals
/* Given Binary Tree:
                A
               /  \
              B    C
             / \  / \
            D   E F  G
*/
#include<iostream>
using namespace std;

//making node structure
class Node
{
    public:
    char data;
    Node *left;
    Node *right;

    //constructor for initilizing node at the time of object creation
    Node(char d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

//Pre-Order Traversal func..
int preOrderTraversal(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    // ROOT->LEFT->RIGHT manner
    cout<<root->data<<" ,";//ROOT
    preOrderTraversal(root->left);//LEFT
    preOrderTraversal(root->right);//RIGHT
}

//Post-Order Traversal func..
int postOrderTraversal(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    // LEFT->RIGHT->ROOT manner
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ,";
}

//IN-orer Traversal
int inOrderTraversal(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    //LEFT->ROOT->RIGHT manner
    inOrderTraversal(root->left);
    cout<<root->data<<" ,";
    inOrderTraversal(root->right);
}
int main()
{
    Node *root = new Node('A'); // node val A

    root->left = new Node('B'); // left child of root B
    root->right = new Node('C'); // right child of root C

    root->left->left = new Node('D'); //left child of root's left child
    root->left->right = new Node('E');//right child of root's left child

    root->right->left = new Node('F');//left child of root's right child
    root->right->right = new Node('G');//right child of root's right child

    //PRE-order traversal func.. call
    cout<<"Pre-Order Traversal:-  ";
    preOrderTraversal(root);

    cout<<endl;
    //POST-order traversal func.. call
    cout<<"post-Order Traversal:-  ";
    postOrderTraversal(root);

    cout<<endl;
    //IN-order traversal func.. call
    cout<<"IN-Order Traversal:-  ";
    inOrderTraversal(root);

    return 0;
}