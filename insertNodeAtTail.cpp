// Insert Node At Tail.. in singly linked list
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
        this -> data = data;
    }
};

//insert at tail/ last of singly linked list
void insertNodeAtTail(Node* &head, int data)
{
    Node* temp=head; //temporary pointer variable that points to head of SLL
    Node* newNode = new Node(data); // create new node

    if(head == NULL) // if there is no node in SLL
    {
        head = newNode;
        head -> next= NULL;
        return;
    }

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = NULL;

}


//display singly linked list
void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
} 


int main()
{
    Node* head=NULL;
    insertNodeAtTail(head,1);
    insertNodeAtTail(head,2);
    insertNodeAtTail(head,3);
    insertNodeAtTail(head,4);
    display(head);

}