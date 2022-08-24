// insert node at head of DLL
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data)
    {
        this->data = data;
        next=NULL;
        prev=NULL;
    }
};

//insert node at head function code....
void insertNodeAtHead(Node* &head,Node* &tail,int data)
{
    Node* temp1=head;

    Node* newNode = new Node(data);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        newNode->next=NULL;
        newNode->prev=NULL;
        return;
    }
   newNode->next = head;
   head->prev = newNode;
   head = newNode;
}

//display from head
void display(Node* head)
{
    cout<<endl<<"DISPLAYING FROM HEAD"<<endl;
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

//display from tail
void displayFromTail(Node* tail)
{
    cout<<endl<<"DISPLAYING FROM TAIL"<<endl;
    while(tail!=NULL)
    {
        cout<<tail->data<<"->";
        tail=tail->prev;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node* head;
    Node* tail;
    head=tail=NULL;

    insertNodeAtHead(head,tail,39);
    insertNodeAtHead(head,tail,41);
    insertNodeAtHead(head,tail,47);
    insertNodeAtHead(head,tail,48);
    insertNodeAtHead(head,tail,54);
    insertNodeAtHead(head,tail,000);
    insertNodeAtHead(head,tail,22);

    display(head);
    displayFromTail(tail);
    return 0;


}