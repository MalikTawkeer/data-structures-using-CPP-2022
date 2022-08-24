// REverse singly linked list
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int d){
    data=d;
    next=NULL;
    }
};

// create linked list
void insertNodeAtStart(Node *&start,int data)
{
    Node *temp=start;
    Node *newNode=new Node(data);
    if(start == NULL)
    {
        start = newNode;
        return;
    }
    // if(start->next == NULL)
    // {
    //     start->next = newNode;
    //     return;
    // }
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}


//reverse singly linked list
void reverseSLL(Node *&start)
{
    Node *temp=start,*currNode=start,*nextNode=NULL,*prevNode=NULL;
    if(start == NULL)
    {
        cout<<"linked list is empty"<<endl;
        return;
    }

    while(currNode != NULL)
    {
        nextNode=currNode->next;
        currNode->next=prevNode;
        prevNode=currNode;
        currNode=nextNode;
    }
    start=prevNode;

}

void display(Node *start)
{
    while(start != NULL)
    {
        cout<<start->data<<endl;
        start = start->next;
    }
}

int main()
{
    Node *start =NULL;
    insertNodeAtStart(start,1);
    insertNodeAtStart(start,2);
    insertNodeAtStart(start,3);
    insertNodeAtStart(start,4);

    display(start);

    reverseSLL(start);

    display(start);
}