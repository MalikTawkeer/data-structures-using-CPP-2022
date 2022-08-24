// delete a node after any given node value
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

//insert nodes at last
void insertNodeAtLast(Node* &head,int data)
{
    Node* temp=head;
    Node* newNode=new Node(data);
    if(head==NULL)
    {
        head=newNode;
        head->next=NULL;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}

// insert a node after any given value of node

void deleteNodeAfterAnyGivenNodeValue(Node* &head,int nodeVal)
{
    Node* temp=head;
    Node* currNode;
    Node* nextNode;
    Node* prevNode=NULL;
    

    if(temp->next==NULL)
    {
        delete temp;
        head=NULL;
        return;
    }

    while(temp!=NULL)
    {
        if(temp->data == nodeVal)
        {
            currNode=temp;
            nextNode=currNode->next;
            prevNode->next=nextNode;
            delete currNode;
            return;
        }
        prevNode=temp;
        temp=temp->next;
    }
}

//display nodes
void display(Node* head)
{
    while (head!=NULL)
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
    insertNodeAtLast(head,40);

    display(head);

    deleteNodeAfterAnyGivenNodeValue(head,40);
    deleteNodeAfterAnyGivenNodeValue(head,2);
    deleteNodeAfterAnyGivenNodeValue(head,4);
    deleteNodeAfterAnyGivenNodeValue(head,3);
    deleteNodeAfterAnyGivenNodeValue(head,1);
    display(head);
}