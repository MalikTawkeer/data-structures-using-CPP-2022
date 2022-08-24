// insert node at the center of doubly linked list
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
        prev=NULL;
        this->data = data;
        next=NULL;
    }
};

int countNodes(Node*);

//insert node at tail
void insertNodeAtTail(Node *&head,Node *&tail,int data)
{
    Node *newNode = new Node(data);
    if(head==NULL)
    {
        head=tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail = newNode;
}

//insert node at the center of DLL
void insertNodeAtCenterOfDLL(Node *&head,int val)
{
    Node *temp=head;
    Node *newNode=new Node(val);
    int center = countNodes(head)/2, count=0;
    if(head==NULL)
    {
        cout<<"\n No DLL exists!!!!"<<endl;
        return;
    }

    while(temp!=NULL)
    {
        count++;
        if(count == center)
        {
            newNode->next = temp->next;
            temp->next = newNode;
            newNode->next->prev=newNode;
            newNode->prev=temp;
            return;
        }
        temp=temp->next;
    }
}


//cout nodes of DLL to insert node at center
int countNodes(Node *head)
{
    int count=0;
    while(head != NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}

// display from head
void display(Node *head)
{
    while(head!=NULL)
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
    
    for(int i=1;i<=5;i++)
    insertNodeAtTail(head,tail,i);

    display(head);
    insertNodeAtCenterOfDLL(head,0);
    display(head);
}
