// MENU DRAWN LINKED QUEUE IMPLEMENTATION USING SLL
#include<iostream>
using namespace std;
class Node 
{
    public:
    int data;
    Node *next;

    Node (int d)
    {
        data =d;
        next=NULL;
    }
};


//function to insert elements into a queue
void enQueue(Node *&front,Node *&rear)
{
    cout<<endl;
    int element;
    cout<<"Enter An Element:-\t";
    cin>>element;
    Node *newNode = new Node(element);
    if(rear == NULL && front == NULL)
    {
        rear=front=newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
    cout<<endl;
}

//func.. to delete elements from queue
void deQueue(Node *&front,Node *&rear)
{
    cout<<endl;
    Node *tempFront;
    if(front == NULL && rear == NULL)
    {
        cout<<"Queue is empty!! Deletion is not possible!"<<endl;
        return;
    }
    if(front->next == NULL)
    {
        cout<<front->data<<" element deleted"<<endl;
        delete front;
        front =rear= NULL;
        return;
    }
    tempFront = front;
    cout<<front->data<<" element deleted"<<endl;
    front = front->next;
    delete tempFront;
    cout<<endl;
}

//function to display elements of queue
void displayQueue(Node *front ,Node *rear)
{
    while(front != NULL)
    {
        cout<<front->data<<endl;
        front=front->next;
    }
    cout<<endl;
}

int main()
{
    Node *front,*rear;
    front=NULL;
    rear=NULL;
    int choice;
    while(1)
    {
        cout<<"1. INSERT ELEMENT INTO QUEUE:"<<endl;
        cout<<"2. DELETE ELEMENT FROM QUEUE:"<<endl;
        cout<<"3. DISPLAY ELEMENTS OF QUEUE:"<<endl;
        cout<<"4. QUIT"<<endl;  
        cout<<"Enter a choice: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"*************************Insert element********************************"<<endl;
            enQueue(front,rear);
            cout<<"element inserted"<<endl;
            break;
            case 2:
            cout<<"*************************Delete element********************************"<<endl;
            deQueue(front,rear);
            break;
            case 3:
            cout<<"*************************Display element********************************"<<endl;
            displayQueue(front,rear);
            break;

            case 4:
            exit(0);
            default:
            cout<<"wrong choice!!"<<endl;

        }

    }


    return 0;
}