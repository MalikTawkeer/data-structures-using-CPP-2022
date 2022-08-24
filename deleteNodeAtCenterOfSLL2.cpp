// DELETE NODE AT THE CENTER OF SLL attempt-2
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

//insert node at last of SLL
void insertNodeAtLast(Node* &head,int data)
{
    Node* temp=head;
    Node* newNode = new Node(data);
    if(head==NULL)
    {
        head = newNode;
        newNode->next = NULL;
        return;
    }

    while (temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next = newNode;
    newNode->next = NULL;
}

//display SLL
void display(Node* head)
{
    while (head != NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

//delete node at the center
void deleteNodeAtCenterOfSll(Node* &head)
{
    Node* temp=head;//temp is used to maintain link of SLL because it is temporary
    Node *temp2=head;
    Node *currNode,*nextNode,*prevNode;
    int nodeCount=0; // count the number of nodes in linked list
    float center;
    int mid;
   // loop to count number of nodes in a linked list
    while(temp!=NULL)
    {
        nodeCount++;
        temp=temp->next;
    }

    center = nodeCount/2; // 0.5 is used to give exact center
    mid = center+0.5;

    if(nodeCount%2 == 0)
    nodeCount=0;
    else
    nodeCount=-1;

    //temp=head;
    while(temp2!=NULL)
    {
        nodeCount++;
        if(mid == nodeCount)
        {
            //currNode = temp2;
            prevNode->next = temp2->next;
            temp2->next=NULL;
            delete temp2;
            return;
        }
        prevNode=temp2;
        temp2=temp2->next;
        
        
    }
}

int main()
{
    Node *head=NULL;
    insertNodeAtLast(head,1);
    insertNodeAtLast(head,2);
    insertNodeAtLast(head,3);
    insertNodeAtLast(head,4);
    insertNodeAtLast(head,5);
    insertNodeAtLast(head,6);
    insertNodeAtLast(head,7);
    insertNodeAtLast(head,8);
    insertNodeAtLast(head,9);
    

    display(head);
    
    deleteNodeAtCenterOfSll(head);
    display(head);
}