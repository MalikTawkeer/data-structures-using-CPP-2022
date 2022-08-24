// deleteion of entire singly list 
#include<iostream>
using namespace std;

class Node
{
    public:
    char data;
    Node*next;
    Node(int d)
    {
        data = d;
        next =NULL;
    }
};
void insertNodeAtBeggining(Node *&start, int data)
{
    Node *newNode = new Node(data);
    Node *temp = start;
    if(start == NULL)
    {
        start = newNode;
        return;
    }
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void delEntireSLL(Node *&start)
{
    Node *temp = start,*currNode;
    if(start == NULL)
    {
        cout<<"Linked List is empty!!;"<<endl;
        return;
    }
    while (temp != NULL)
    {
        currNode = temp;
        temp = temp->next;
        currNode->next =NULL;
        cout<<currNode->data<<" DELETED"<<endl;
        delete currNode;
        
    }
    start = NULL;
    cout<<"ENTIRE SLL DELETED!! "<<endl;
}
void display(Node *start)
{
    if(start == NULL)
    {
        cout<<"SLL IS EMPTY!!;"<<endl;
        return;
    }
    while(start != NULL)
    {
        cout<<start->data<<" ";
        start = start->next;
    }
}

int main()
{
    Node *start = NULL;
   
    insertNodeAtBeggining(start,'A');
    insertNodeAtBeggining(start,'B');
    insertNodeAtBeggining(start,'C');
    insertNodeAtBeggining(start,'D');
    insertNodeAtBeggining(start,'E');

    display(start);

    delEntireSLL(start);

    display(start);
}