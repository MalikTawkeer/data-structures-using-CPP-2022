// DELETING ENTIRE LINKED LIST

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(){}
    Node( int data)
    {
        this->data =data;
        this->next=NULL;
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
        head->next=NULL;
        return;
    }
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}

//delete entire  linked list
void deleteEntireLinkedList(Node* &head)
{
    Node* temp=head;
    Node* curr;

    while(temp!=NULL)
    {
        curr = head;
        temp=temp->next;
        curr->next=NULL;
        delete curr;
    }

}

//display
void display(Node* head)
{
    if(head==NULL)
    {
        cout<<"linked list is empty";
    }
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node* head=NULL;

    insertNodeAtLast(head,1);
    insertNodeAtLast(head,100);
    insertNodeAtLast(head,200);
    insertNodeAtLast(head,3000);

    display(head);

    deleteEntireLinkedList(head);
    display(head);
}