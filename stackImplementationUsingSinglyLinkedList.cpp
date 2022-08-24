// stack implementation using singly linked list
#include<iostream>
using namespace std;

class Node
{
    public:
    int element;
    Node *next;

    Node(int element)
    {
        this->element = element;
        this->next = NULL;
    }
};

// inserting the elements into the stack using PUSH() function
void push(Node* &top,int element)
{
    Node *newNode = new Node(element);
    if(top == NULL)
    {
        top = newNode;
        return;
    }
    else
    {
        newNode->next = top;
        top = newNode;
    }
}

//pop function to remove elements from stack
void pop(Node *&top)
{
    Node *tempTop=top, *nextNode;
    if(top == NULL)
    {
        cout<<"\nStack Underflow!!\n";
        return;
    }

    nextNode=tempTop->next;
    tempTop->next=NULL;
    cout<<" "<<tempTop->element<<" POPPED"<<endl;
    delete tempTop;
    top=nextNode;

}

// display stack elements
void display(Node *top)
{
    cout<<endl;
    cout<<"Stack Elements Are:"<<endl;
    while(top!=NULL)
    {
        cout<<top->element<<endl;
        top = top->next;
    }
}

int main()
{
    Node *top=NULL;
    push(top,1);
    push(top,2);
    push(top,3);
    push(top,4);
    push(top,5);
    display(top);

    pop(top);
    pop(top);
    display(top);
}