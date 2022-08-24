//delete node at last in SLL
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){}
    Node(int data)
    {
        this->data=data;
    }
};

//insert node at last in SLL

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

//delete a node at last of SLL
void deleteNodeAtLast(Node* &head)
{
    Node* temp=head;
    Node* currNode=NULL;
    Node* prevNode;
    if(head==NULL)
    {
        cout<<"linked list is empty"<<endl;
    }

    while (temp->next!=NULL)
    {
        prevNode=temp;
        temp=temp->next;
    }
    currNode=temp;
    prevNode->next=NULL;
    delete currNode;
    
}

//display linked list nodes
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

    insertNodeAtLast(head,1);
    insertNodeAtLast(head,2);
    insertNodeAtLast(head,3);
    insertNodeAtLast(head,4);

    display(head);

    deleteNodeAtLast(head);
    deleteNodeAtLast(head);
    deleteNodeAtLast(head);
    deleteNodeAtLast(head);

    display(head);
}