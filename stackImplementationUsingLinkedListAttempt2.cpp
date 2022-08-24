// stack implementation using singly linked list ATTEMPT-2
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// check whether the  stack is empty or not
bool isEmpty(Node *top)
{
    if(top == NULL)
    {
        return true;
    }
    return false;
}

// func.. to put the elements into the stack
void push(Node *&top,int element)
{
    Node *newNode = new Node(element);
    if(isEmpty(top))
    {
        top=newNode;
        return;
    }
    newNode->next = top;
    top = newNode;
}

// func.. to pop elements from the stack
void pop(Node* &top)
{
    Node *tempTop=top;
    if(isEmpty(top))
    {
        cout<<"Stack Underflow!!"<<endl;
        return;
    }
    tempTop = top;
    top = top->next;
    tempTop->next=NULL;
    delete tempTop;
    
}

//func.. to display elements of the stack
void display(Node *top)
{
    if(isEmpty(top))
    {
        cout<<"Stack Underflow";
        return;
    }
    cout<<endl;
    while(top != NULL)
    {
        cout<<top->data<<endl;
        top = top->next;
    }
}

// func.. from which the program starts
int main()
{
    Node *top=NULL;
    push(top,1);
    push(top,2);
    push(top,3);
    push(top,4);

    display(top);

    pop(top);
    pop(top);
    
    display(top);
}