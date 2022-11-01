//QUEUE IMPLEMENTATION USING ARRAY FINAL
#include<iostream>
using namespace std;
#define SIZE 6 
int front=-1;
int rear=-1;
int queue[SIZE-1]={0};

//insert elements into an queue
void enQueue()
{
    int data=data+1;;
    if(rear == SIZE-1)
    {
        cout<<"QUEUE IS FULL !!"<<endl;
        return;
    }
    if(rear == -1 and front == -1)
    {
        ++front;
        ++rear;
        queue[rear] = data;
        return;
    }
    ++rear;
    queue[rear] = data;
}

//func... to remove elements from a QUEUE
void deQueue()
{
    if(rear == -1 && front == -1) //if queue is empty
    {
        cout<<"QUEUE IS EMPTY!!"<<endl;
        return;
    }
    if(front == rear)
    {
        cout<<queue[front]<<" element removed"<<endl;
        front = -1;
        rear = -1 ;
        return;
    }
    // if there are more than one elements in a queue
    cout<<queue[front]<<" element removed"<<endl;
    ++front;

}

// show queue elements
void displayQueue()
{
    int front2 = front;
    if(front == -1 && rear == -1)
    {
        cout<<"QUEUE IS EMPTY!!!"<<endl;
        return;
    }
    
    while (front2 != SIZE)
    {
        cout<<queue[front2]<<" "<<endl;
        front2 = front2+1;
    }   
}

int main()
{
    enQueue();
    enQueue();
    enQueue();
    enQueue();
    enQueue();
    enQueue();
    displayQueue();
    cout<<"FRONT ="<<front<<"REAR ="<<rear<<" "<<endl;

    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    cout<<"AFTER REMOVAL"<<endl;
    cout<<"FRONT ="<<front<<"REAR ="<<rear<<" "<<endl;
    
    displayQueue();

}