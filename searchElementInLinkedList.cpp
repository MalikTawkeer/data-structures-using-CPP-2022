// search an element in a linked list
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

void insertDataIntoSll(Node* &head,int data)
{
    Node* temp=head;
    Node* newNode=new Node(data);
    if(head==NULL) //check for first node
    {
        head=newNode;
        head->next=NULL;
        return;
    }else if(head->next==NULL) //check for second node
    {
        head->next=newNode;
        newNode->next=NULL;
        return;
    }
    while(temp->next!=NULL)
    { temp=temp->next;}
    temp->next=newNode;
    newNode->next=NULL;
}


void searchElement(Node* &head,int element)
{
    Node* temp=head;
    int count=0;
    if(head==NULL)
    {
        cout<<"No linked list exists"<<endl;
        return;
    }
    while (temp!=NULL)
    {
        count++;
        if(temp->data == element)
        {
            cout<<temp->data<<"element found at location"<<count;
            return;
        }
        temp=temp->next;
    }
    
}
void display(Node* head)
{
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
    
}


int main()
{
    Node* head=NULL;
    insertDataIntoSll(head,1);
    insertDataIntoSll(head,2);
    insertDataIntoSll(head,3);
    insertDataIntoSll(head,4);
    display(head);

    searchElement(head,4);
}