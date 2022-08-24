// merge two sorted SLLS
/* By ku developers hub
    20/06/2022 , 8:11 AM */

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

//insert nodes into SLL
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
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}

void simplerMerge(Node* &head,Node* &head2)
{
    Node* temp=head;
    if(head==NULL && head2==NULL)
    {
        cout<<"Both linked lists are empty:"<<endl;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head2;
}
//display
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
    Node* head2=NULL;

    insertNodeAtLast(head,1);
    insertNodeAtLast(head,2);
    insertNodeAtLast(head,3);
    insertNodeAtLast(head,4);
    
    cout<<"LINKED LIST 1"<<endl;
    display(head);

    insertNodeAtLast(head2,5);
    insertNodeAtLast(head2,6);
    insertNodeAtLast(head2,7);
    insertNodeAtLast(head2,8);
    
    cout<<"LINKED LIST 2"<<endl;
    display(head2);

    simplerMerge(head,head2);
    cout<<"after merging"<<endl;
    display(head);


}