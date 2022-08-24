// calculate mean of singly linked list
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(){}
    Node(int data)
    {
        this -> data = data;
    }
};

void insertNodeIntoSll(Node* &head,int data)
{
    Node* temp = head;
    Node* newNode = new Node(data);
    if( head == NULL)
    {
        head = newNode;
        newNode -> next = NULL;
    }

    while(temp != NULL)
    {
    temp -> next = newNode;
    newNode -> next = NULL;
    temp = temp -> next;
    }
}

void DisplaySll(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<< temp -> data<<endl;
        temp = temp -> next;
    }
}
int main()
{
    Node* head = NULL;
    insertNodeIntoSll(head,1);
    insertNodeIntoSll(head,2);
    insertNodeIntoSll(head,3);
    DisplaySll(head);
}
