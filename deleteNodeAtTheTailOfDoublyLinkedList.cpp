/*  delete node at the end of th doubly linked list
from ku developers hub 
dated: 14/07/2022  */
#include<iostream>
using namespace std;

class Node 
{
    public:
    Node *prev=NULL;
    int data;
    Node *next=NULL;
    Node(int d)
    {
        data = d;
    }

};

//insert node at the head of DLL
void insertNodeAtTheHeadOfDLL(Node *&head,Node *&tail,int data)
{
    Node *newNode=new Node(data);
    if(head==NULL)
    {
        head=tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

//delete node at the tail of DLL
void deleteNodeAtTheTailOfDLL(Node *&head,Node *&tail)
{
    Node *temp;
    if(tail==NULL)
    {
        cout<<"linked list is empty"<<endl;
        return;
    }
    temp=tail;
    tail=tail->prev;
    tail->next=NULL;
    delete temp;
}

//dsiplay form head
void display(Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL\n";
}


int main()
{
    Node *head,*tail;
    head=tail=NULL;
    for(int i=1;i<=4;i++)
    insertNodeAtTheHeadOfDLL(head,tail,i);
    cout<<"head----> "<<head->data<<" \ntail----> "<<tail->data<<endl;
    cout<<"before deletion: "<<endl;
    display(head);   

    deleteNodeAtTheTailOfDLL(head,tail);
    deleteNodeAtTheTailOfDLL(head,tail);
    cout<<"after deletion"<<endl;
    display(head);
}