//delte node at any specific location 
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
        this->data=data;
    }
};

//insert data at last of SLL
void insertNodeAtLast(Node* &head,int data)
{
    Node* temp=head;
    Node* newNode=new Node(data);
    if(head==NULL)
    {
        head=newNode;
        newNode->next=NULL;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}
//delete node at any specific location code here...
void deleteNodeAtSpecificLocation(Node* &head,int location)
{
    Node* temp=head;
    Node* currNode;
    Node* prevNode;
    Node* nextNode;
    currNode=prevNode=nextNode=NULL;
    int count=0;

    while(temp!=NULL)
    {
        
        count++;
        if(count==location)
        {
            currNode=temp;
            nextNode=temp->next;
            prevNode->next=nextNode;
            delete currNode;
            return;

        }
        prevNode=temp;
        temp=temp->next;
    }
}

//display linked list elements
void display(Node* head)
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
    Node* head=NULL;
    insertNodeAtLast(head,1);
    insertNodeAtLast(head,2);
    insertNodeAtLast(head,3);    
    insertNodeAtLast(head,4);    
    insertNodeAtLast(head,5);    
    display(head);

    deleteNodeAtSpecificLocation(head,2);
    display(head);
    deleteNodeAtSpecificLocation(head,2);

    display(head);
}