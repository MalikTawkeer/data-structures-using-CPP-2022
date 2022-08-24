// insert a node after any give node value
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
        prev =NULL;
        this->data = data;
        next = NULL;
    }
};

// insert node at tail
void insertNodeAtTailOfDLL(Node *&head,Node *&tail,int data)
{
    Node *newNode = new Node(data);
    if(tail == NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}


// func to insert a node after any give node value in DLL
void insertNodeAfterGivenNodeValue(Node *&head,Node *&tail,int target,int val)
{
    Node *temp=head;
    Node *newNode = new Node(val);
    if(head== NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    while(temp != NULL)
    {
        if(temp->data == target)
        {
            //if temp is last node 
            if(temp->next == NULL)
            {
                temp->next=newNode;
                newNode->prev=temp;
                return;   
            }
            newNode->next = temp->next;
            newNode->next->prev = newNode;
            temp->next = newNode;
            newNode->prev = temp;   
            return;        
        }
        temp = temp->next;
    }
}

//display from head
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
    Node *head,*tail;
    head=tail=NULL;
    insertNodeAtTailOfDLL(head,tail,1);
    insertNodeAtTailOfDLL(head,tail,2);
    insertNodeAtTailOfDLL(head,tail,3);
    insertNodeAtTailOfDLL(head,tail,4);
    insertNodeAtTailOfDLL(head,tail,2);

    
    display(head);
    insertNodeAfterGivenNodeValue(head,tail,4,1); //(head,tail,target,val)
    insertNodeAfterGivenNodeValue(head,tail,2,0);

    display(head);
}