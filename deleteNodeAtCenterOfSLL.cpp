//delete a node at center of SLL
/* By ku developers hub
    20/06/2022 , 8:11 AM */

#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    
    //Default constructor
    Node(){}
    //parameterized constructor
    Node(int data)
    {
        this->data=data;
    }
};

int sizeOfSll(Node* );

//insert data into SLL
void insertNodeAtLastOfSLL(Node* &head,int data)
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

void deleteNodeAtCenter(Node* &head)
{
    Node*temp=head;
    Node*curNode;
    Node*nextNode;
    Node*prevNode;
    int center=sizeOfSll(head)/2;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        if(count==center)
        {
            curNode=temp;
            nextNode=curNode->next;
            prevNode->next=nextNode;
            delete curNode;
            return;
        }
        prevNode=temp;
        temp=temp->next;

    }
}

//count number of nodes in SLL to find center of SLL
int sizeOfSll(Node* head)
{
    int size=0;
    while (head!=NULL)
    {
        size++;
        head=head->next;
    }
    return size;
    
}

// display data in SLL
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

    insertNodeAtLastOfSLL(head,1);
    insertNodeAtLastOfSLL(head,11);
    insertNodeAtLastOfSLL(head,22);
    insertNodeAtLastOfSLL(head,33);
    insertNodeAtLastOfSLL(head,44);
    insertNodeAtLastOfSLL(head,55);
    insertNodeAtLastOfSLL(head,66);
    insertNodeAtLastOfSLL(head,77);

    display(head);

    deleteNodeAtCenter(head);

    display(head);
}