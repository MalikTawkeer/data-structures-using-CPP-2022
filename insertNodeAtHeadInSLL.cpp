//  Insert node at head of SLL
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
        this->data = data;
    }
};

//insert a node at head of SLL
void insertNodeAtHeadOfSLL(Node* &head, int data)
{
    Node* newNode=new Node(data);
    Node* temp=head;
    if(head == NULL)
    {
        head = newNode;
        newNode->next=NULL;
        return;
    }
    newNode->next=temp;
    head=newNode;
}

//display node in SLL
void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

int main()
{
    Node* head=NULL;
    insertNodeAtHeadOfSLL(head,1);
    insertNodeAtHeadOfSLL(head,2);
    insertNodeAtHeadOfSLL(head,3);
    insertNodeAtHeadOfSLL(head,4);
    insertNodeAtHeadOfSLL(head,5);
    display(head);
}