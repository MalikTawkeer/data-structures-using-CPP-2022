/*insert a node at any location in Doubly Linked List
dated 14/07/2022 
from ku developers hub
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

//insert node at tail
void insertNodeAtTail(Node *&head,Node *&tail,int data)
{
    Node *newNode = new Node(data);
    if(head==NULL)
    {
        head=tail=newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev=tail;
    tail=newNode;
}

//insert node at any location
void insertNodeAnyLocationInDLL(Node *&head,Node *&tail,int location,int val)
{
    Node *temp=head;
    Node *newNode = new Node(val);
    int count=0;
    if(head == NULL)
    {
        head=tail=newNode;
        return;   
    }

    while(temp != NULL)
    {
        count++;
        if(count == location)
        {
            if(temp->next == NULL)
            {
                newNode->prev = temp;
                temp->next = newNode;
                tail=newNode;
                return;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            newNode->prev = temp;
            newNode->next->prev=newNode;
            return;
        }
        temp = temp->next;
    }

}

//display from head
void displayFromHead(Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node *head,*tail;
    head=tail=NULL;
    insertNodeAtTail(head,tail,1);
    insertNodeAtTail(head,tail,2);
    insertNodeAtTail(head,tail,3);
    insertNodeAtTail(head,tail,4);
    displayFromHead(head);

    insertNodeAnyLocationInDLL(head,tail,3,0); //(head,tail,locaion,val)
    displayFromHead(head);
}