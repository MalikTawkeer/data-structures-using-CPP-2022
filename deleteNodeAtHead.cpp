// delete node at head in SLL
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(){}
    Node(int data)
    {
        this->data=data;
    }
};

//insert node at last
void insertNodeAtLast(Node* &head,int data)
{
    Node* temp=head;
    Node* newNode=new Node(data);
    if(head==NULL)
    {
        head=newNode;
        newNode->next=NULL;
        return;
    }
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}

//display SLL
void display(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

//delete node at head
void deleteNOdeAtHead(Node* &head)
{
    Node* temp;
    if(head==NULL)
    {
        cout<<"no node exixts"<<endl;
        return;
    }
    temp=head;
    head=head->next;
    delete temp;
}


int main()
{
    Node* head=NULL;
    insertNodeAtLast(head,1);
    insertNodeAtLast(head,2);
    insertNodeAtLast(head,3);

    display(head);
    deleteNOdeAtHead(head);
    display(head);
}