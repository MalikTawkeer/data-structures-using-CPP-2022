// delete node at the begining of SLL attempt-2
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
    }
};

//insert node at head of SLL
void insertNodeAtHead(Node* &head,int data)
{
    Node* newNode=new Node(data);
    if(head==NULL)
    {
        head=newNode;
        newNode->next=NULL;
        return;
    }
    newNode->next = head;
    head=newNode;
}

//delete node at head in SLL
void deleteNodeAtHead(Node* &head)
{
    Node* currNode;
    if(head==NULL)
    {
        cout<<"NOTHING TO DELETE HERE!!"<<endl;
        return;
    }
    currNode = head;
    head = head->next;
    currNode->next = NULL;
    delete currNode;
}

//delete node at the last of SLL
void deleteNodeAtLastOfSll(Node* &head)
{
    Node *temp=head,*curNode,*prevNode;
    if(head==NULL)
    {
        cout<<"Nothing to delte here in SLL!!"<<endl;
        return;
    }

    while(temp->next != NULL)
    {
        prevNode=temp;
        temp = temp->next;
    }
    curNode=temp;
    prevNode->next = NULL;
    delete curNode;

}


//display
void displaySll(Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node* head=NULL;

    insertNodeAtHead(head,12);
    insertNodeAtHead(head,13);
    insertNodeAtHead(head,40);
    insertNodeAtHead(head,80);
    displaySll(head);

    /*deleteNodeAtHead(head);
    deleteNodeAtHead(head);
    displaySll(head);*/

    deleteNodeAtLastOfSll(head);
    displaySll(head);
}