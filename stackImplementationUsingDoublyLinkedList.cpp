// stack implementation using doubly linked list
#include<iostream>
using namespace std;
class Node
{
    public:
    Node *prev;
    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

bool isEmpty(Node *top)
{
    if(top==NULL)
    return true;
    else
    return false;
}

void push(Node *&top,int element)
{
    Node *newNode = new Node(element);
    if(isEmpty(top))
    {
        top=newNode;
        return;
    }
    newNode->next=top;
    top->prev=newNode;
    top=newNode;
}

void pop(Node *&top)
{
    Node *tempTop=top;
    if(isEmpty(top))
    {
        cout<<"stack underflow!!"<<endl;
        return;
    }
    tempTop=top;
    top=top->next;
    tempTop->next=NULL;
    top->prev=NULL;
    cout<<tempTop->data<<" popped from stack"<<endl;
    delete tempTop;
    

}

void display(Node *top)
{
    if(isEmpty(top))
    {
        cout<<"stack underflow"<<endl;
        return;
    }
    while(top != NULL)
    {
        cout<<top->data<<endl;
        top=top->next;
    }
}

int main()
{
    Node *top=NULL;

    push(top,1);
    push(top,10);
    push(top,20);
    push(top,30);

    display(top);

    pop(top);
    pop(top);

    display(top);
}