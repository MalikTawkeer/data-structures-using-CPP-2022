#include<iostream>
using namespace std;

class Node 
{
    public:
    Node *prev;
    int data;
    Node *next;

    Node(int data)
    {
        prev = NULL;
        this->data = data;
        next = NULL;
    }
};

//func...  to insert elements into queue 
void enQueue(Node *&front,Node *&rear,int data)
{
    Node *newNOde = new Node(data);
    if(front == NULL && rear == NULL)
    {
        front = rear = newNOde;
        return;
    }
    rear->next = newNOde;
    newNOde->prev = rear;
    rear = newNOde;
}

//dequeue func to delete elements from queue
void deQueue(Node *&front,Node *&rear)
{
    Node *tempFront;
    if(front == NULL && rear == NULL) // if no element in queue
    {
        cout<<"queue is empty!!"<<endl;
        return;
    }
    if(front->next == NULL) //if only one element
    {
        delete front;
        front = NULL;
        rear = NULL;
        return;
    }
    tempFront = front;
    front=front->next;
    front->prev = NULL;
    tempFront->next = NULL;
    cout<<tempFront->data<<" \t/t delted"<<endl;
    delete tempFront;
    
    

}

// func.. to display elements of queue
 void displayQueue(Node *front)
 {
    if(front == NULL)
    {
        cout<<"QUEUE is EMPTY!!"<<endl;
        return;
    }
    while(front != NULL)
    {
        cout<<front->data<<" ";
        front = front->next;
    }
    cout<<endl;
 }


 int main()
 {
    Node *front,*rear;
    front=rear=NULL;
    enQueue(front,rear,1);
    enQueue(front,rear,2);
    enQueue(front,rear,3);

    cout<<"before removal"<<endl;
    displayQueue(front);

    deQueue(front,rear);
    deQueue(front,rear);
    deQueue(front,rear);
    cout<<"After removal of elements"<<endl;
    displayQueue(front);
     }
