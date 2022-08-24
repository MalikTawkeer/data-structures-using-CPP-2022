//insert Node Before Any Given Node Value In Doubly linked list
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
        prev = NULL;
        this->data = data;
        next = NULL;
    }
};


//insert node at the tail 
void insertNodeAtTailOfDLL(Node *&head,Node *&tail,int data)
{
    Node *newNode = new Node(data);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail=newNode;
}

//func code to insert node before any given node value in DLL
void insertNodeBeforeAnyGivenNodeValue(Node *&head,Node *&tail,int target,int val)
{
    Node *temp=head;
    Node *newNode=new Node(val);
    if(head==NULL)
    {
        tail=head=newNode;
        return;
    }

    while(temp != NULL)
    {
        if(temp->data == target)
        {
            //if it was only one node 
            if(temp->prev == NULL)
            {
                newNode->next=temp;
                temp->prev=newNode;
                head=newNode;
                return;
            }
            newNode->next = temp;
            newNode->prev = temp->prev;
            newNode->prev->next=newNode;
            temp->prev = newNode;
        }
        temp=temp->next;
    }
}


//display form head
void display(Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL\n";
}

int main()
{
    Node *head,*tail;
    head=tail=NULL;
    insertNodeAtTailOfDLL(head,tail,1);
    insertNodeAtTailOfDLL(head,tail,2);
    insertNodeAtTailOfDLL(head,tail,3);
    display(head);
    insertNodeBeforeAnyGivenNodeValue(head,tail,1,0);
    display(head);
}