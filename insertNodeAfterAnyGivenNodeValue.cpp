// insert Node After Any Given Node Value
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

//insert Node After Any Given Node Value
void insertNodeAfterAnyGivenNodeValue(Node* &head , int data ,int gnode)
{
    Node* temp=head;
    Node* newNode=new Node(data);
    Node* nextNode;
    Node* currNode;

    if(head==NULL)
    {
        head=newNode;
        newNode->next=NULL;
    }

    while(temp !=NULL)
    {
        if(temp->data == gnode)
        {
           currNode=temp;
           nextNode=temp->next;
           temp->next=newNode;
           newNode->next=nextNode;
           return;
        }else{cout<<"GIVE NODE  NOT FOUND!!"<<endl; }

        temp=temp->next;
    }

}

//display the SLL
void display(Node* head)
{
    Node* temp=head;
    while(temp != NULL)
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
    insertNodeAfterAnyGivenNodeValue(head,0,3); //(head of LL ,new data to be stored , value where data is to b stored )

    display(head);
}