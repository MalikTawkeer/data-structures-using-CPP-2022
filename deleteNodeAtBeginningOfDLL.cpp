/* delete node at the beginning of Doubly linked list.
from ku developers hub 
dated: 14/07/2022
*/
#include<iostream>
using namespace std;

class Node
{
    public:
    Node *prev=NULL;
    int data;
    Node *next=NULL;
    Node(int data)
    {
        this->data = data;
    }
};

//insert node at head of DLL
void insertNodeAtBeginningOfDLL(Node *&head,Node *&tail,int data)
{
    Node *newNode = new Node(data);
    if(head == NULL)
    {
        head=tail=newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}

//delete node at the beginning of doubly linked list
void deleteNodeAtTheBeginningOfDLL(Node *&head,Node *&tail)
{
    Node *temp=head;
    if(head==NULL)
    {
        cout<<"doubly linked list is empty!!"<<endl;
        return;
    }
    temp=head;

    head=head->next;
    delete temp;

}

// display from tail
void displayFromTail(Node *tail)
{
    while(tail != NULL)
    {
        cout<<tail->data<<"->";
        tail = tail->next;
    }
    cout<<"NULL\n";
}

int main()
{
    Node *head,*tail;
    head=tail=NULL;
    insertNodeAtBeginningOfDLL(head,tail,1);
    insertNodeAtBeginningOfDLL(head,tail,2);
    insertNodeAtBeginningOfDLL(head,tail,3);
    insertNodeAtBeginningOfDLL(head,tail,4);
    cout<<"nodes before deletion:"<<endl;
    displayFromTail(head);

    deleteNodeAtTheBeginningOfDLL(head,tail);
    deleteNodeAtTheBeginningOfDLL(head,tail);
    cout<<"nodes aftrer deletion"<<endl;
    displayFromTail(head);
}