// delete node at the center of doubly linked list
#include<iostream>
using namespace std;
class Node
{
    public:
    Node *prev=NULL;
    int data;
    Node *next=NULL;
    Node(int d)
    {   data=d;    }
};

//insert node at the tail of DLL
void insertAtTail(Node *&head,Node *&tail,int data)
{
    Node *newNode = new Node(data);
    if(tail==NULL)
    {
        head=tail=newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;   
}

//count nodes to delete node at center
int countNodes(Node *tail)
{
    int count=0;
    while(tail != NULL)
    {
        count++;
        tail = tail->prev;
    }
    return count;
}

//delete node at the center of doubly linked list 
void deleteNodeAtCenterOfDLL(Node *&head,Node *&tail)
{
    Node *temp=head;
    int center= countNodes(tail)/2,count=0;
    if(countNodes(tail) == 0)
    {
        cout<<"Nothing to delete Linked list is empty!!!"<<endl;
        return;
    }

    while(temp != NULL)
    {
        count++;
        if(count == center)
        {
            if(temp->next == NULL)
            {
                delete temp;
                return;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        }
        temp = temp->next;
    }
}

//display
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
    for(int i=1;i<=10;i++)
    insertAtTail(head,tail,i);

    displayFromHead(head);
    deleteNodeAtCenterOfDLL(head,tail);
    displayFromHead(head);
}