// add a node at any specific location
#include<iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node* next;

    Node() { }

    Node(int data)
    {
        this->data=data;
    }

};

//insert a node at any specific location
void insertNodeAtAnySpecificLocation(Node* &head,int newData,int location)
{
    Node* temp=head;
    Node* newNode=new Node(newData);
    Node* nextNode;
    int count=0;
    if(head == NULL)
    {
        head=newNode;
        head->next=NULL;
    }

    while(temp!=NULL)
    {
        count++;
        if(count==location)
        {
            nextNode=temp->next;
            temp->next=newNode;
            newNode->next=nextNode;
            return;
        }
        temp=temp->next;
    }
}

//insert nodes at last
void insertNodeAtLastOfsll(Node* &head,int data)
{
    Node* temp=head;
    Node* newNode=new Node(data);
    if(head==NULL)
    {
        head=newNode;
        head->next=NULL;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    temp->next=newNode;
    newNode->next=NULL;

}

// display SLL
void display(Node* head)
{
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
    insertNodeAtLastOfsll(head,1);
    insertNodeAtLastOfsll(head,2);
    insertNodeAtLastOfsll(head,3);
    insertNodeAtLastOfsll(head,4);

    display(head);

    insertNodeAtAnySpecificLocation(head,10000,2);

    display(head);
}