// insert node at the tail of doubly linked list
/* BY KU DEVELOPERS HUB */

#include<iostream>
using namespace std;

class Node
{
    public:
    Node *prev;
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

//insert node at the tail of DLL
void insertNodeAtTheTailOfDLL(Node *&head,Node *&tail ,int data)
{
    Node *newNode = new Node(data);

    if(tail == NULL)
    {
        tail = newNode;
        head=newNode;
        return;
    }
    newNode->prev = tail;
    tail->next=newNode;
    tail=newNode;

}

//displaying from head
void displayFromHead(Node *head){

    cout<<"display from head"<<endl;
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL\n";
}

//displaying from tail
void displayFromTail(Node *tail)
{
    cout<<"display form tail\n";
    while(tail != NULL)
    {
        cout<<tail->data<<"->";
        tail=tail->prev;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node *head,*tail;
    head=tail=NULL;
    insertNodeAtTheTailOfDLL(head,tail,1);
    insertNodeAtTheTailOfDLL(head,tail,2);
    insertNodeAtTheTailOfDLL(head,tail,3);
    insertNodeAtTheTailOfDLL(head,tail,4);

    displayFromHead(head);
    displayFromTail(tail);
}
