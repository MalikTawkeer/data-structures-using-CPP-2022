// delete node at any location in SLL
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
    }
};
//insert node at last
void insertNodeAtLast(Node *&head,int data)
{
    Node *temp=head;
    Node *newNode = new Node(data);
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

//delete node at any location
void deleteNodeAtAnyLocation(Node *&head)
{
    Node *temp=head,*nextNode,*prevNode,*curNode;
    int nCount=0,loc;
    cout<<"Enter Location: \t";
    cin>>loc;

    while(temp!=NULL)
    {
        
        nCount++;
        if(loc == nCount)
        {
            curNode=temp;
            prevNode->next=curNode->next;
            curNode->next=NULL;
            delete curNode;
            return;
        }
        prevNode=temp;
        temp=temp->next;
    }

}

//display
void display(Node *head)
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
    insertNodeAtLast(head,1);
    insertNodeAtLast(head,2);
    insertNodeAtLast(head,3);
    insertNodeAtLast(head,4);
    insertNodeAtLast(head,5);
    insertNodeAtLast(head,6);
    display(head);

    deleteNodeAtAnyLocation(head);
    display(head);
}