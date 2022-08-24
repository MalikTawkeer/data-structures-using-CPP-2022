// insert a node at the center of SLL
#include<iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node* next;

    Node(){ }

    Node(int data)
    {
        this->data =data;
    }
    
};

int coutNumberOfNodes(Node* );

//code to insert a data in the middle of SLL
void insertNodeAtCenterOfSLL(Node* &head,int data)
{
    Node* temp=head;
    Node* currNode=NULL;
    Node* nextNode=NULL;
    Node* newNode=new Node(data);

    int nodeCount=0;
    if(head == NULL)
    {
        head=newNode;
        head->next=NULL;
    }
    int mid= coutNumberOfNodes(head)/2; //calculating middle of link list
    while(temp != NULL)
    {
        nodeCount++;
        if(nodeCount == mid)
        {
            currNode=temp;
            nextNode=temp->next;
            currNode->next=newNode;
            newNode->next=nextNode;
            return;
        }

        temp=temp->next;
    }



}

// code to count number of nodes in a SLL
int coutNumberOfNodes(Node* head)
{
    int count=0;
    while(head != NULL)
    {
        count++;
        head=head->next;
    }

    return count;
}

//code to display SLL
void display(Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}



//insert node at the last of SLL
void insertNodeAtLastOfSLL(Node* &head, int data)
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

int main()
{
    Node* head= NULL;
    insertNodeAtLastOfSLL(head,10);
    insertNodeAtLastOfSLL(head,11);
    insertNodeAtLastOfSLL(head,12);
    insertNodeAtLastOfSLL(head,13);
    insertNodeAtLastOfSLL(head,14);
    insertNodeAtLastOfSLL(head,15);
    insertNodeAtLastOfSLL(head,16);
    insertNodeAtLastOfSLL(head,17);
///////////////////////////////////
    insertNodeAtCenterOfSLL(head,1300);
    display(head);


}