// insert node into doubly linked list
#include<iostream>
using namespace std;

class Node
{
    public:
    Node* prev;
    int data;
    Node* next;
    Node(int data )
    {
        this->data = data;
    }
};

//insert node at head
void insertNodeAtHead(Node* &head,Node* &tail,int data)
{
    Node* temp=head;
    Node* newNode=new Node(data);

    if(head==NULL)
    {
        head=newNode;
        newNode->next=NULL;
        newNode->prev=NULL;
        tail=head;
        return;
    }
    if(head->next== NULL)
    {
        head->next=newNode;
        newNode->prev=head;
        newNode->next=NULL;
        tail=newNode;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
    newNode->next=NULL;
    tail=newNode;
}

//display from head
void display(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
//display from tail
void display2(Node* tail)
{
    while(tail!=NULL)
    {
        cout<<tail->data<<"->";
        tail=tail->prev;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    insertNodeAtHead(head,tail,1);
    insertNodeAtHead(head,tail,2);
    insertNodeAtHead(head,tail,3);
    insertNodeAtHead(head,tail,4);

    display(head);
    display2(tail);
}
