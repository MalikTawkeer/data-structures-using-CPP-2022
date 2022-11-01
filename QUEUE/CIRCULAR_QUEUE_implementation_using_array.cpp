// CIRCULAR QUEUE IMPLEMENTATION USING ARRAY
#include<iostream>
using namespace std;
#define SIZE 5
int queue[SIZE];
int front = -1;
int rear = -1;

// insert elements into circular queue
void enQueue(int element)
{
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = element;
    }else if(((rear+1) % SIZE) == front)
    {
        cout<<"QUEUE FULL!!"<<endl;
    }else{
        rear = (rear + 1) % SIZE;
        queue[rear] = element;
    }
}

// delete element from circular queue
void deQueue()
{
    if(front == -1 && rear == -1)
    {
        cout<<"QUEUE IS EMPTY!!"<<endl;
    }else if(front == rear)
    {
        cout<<queue[rear]<<" DEQUEUED"<<endl;
        front = rear = -1;
    }else{
        cout<<queue[front]<<" DEQUEUED"<<endl;
        front = (front + 1) % SIZE;
    }
}

// DISPLAYING ELEMENTS OF QUEUE
void displayQueue()
{
    int front2 = front;
    if(front == -1 && rear == -1)
    {
        cout<<"QUEUE EMPTY!!"<<endl;
    }else{
        cout<<"FRONT -> ";
        while(front2 != rear)
        {
            cout<<queue[front2]<<" ";
            front2 = (front2+1) % SIZE;
        }
        cout<<"<- REAR \n";
    }

}

int main()
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    displayQueue();

    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    
    displayQueue();
}