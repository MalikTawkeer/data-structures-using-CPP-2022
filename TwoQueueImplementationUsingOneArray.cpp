//Two Queue Implementation Using One Array.cpp
#include<iostream>
using namespace std;

#define SIZE 8
int front1 = -1;
int rear1 = -1;
int front2 = SIZE/2-1;
int rear2 = SIZE/2-1;

int QUEUE[SIZE-1];

//insert elements into a queue
void enQueue1(int element)
{
    if(rear1 == SIZE/2-1)
    {
        cout<<"!!!!!!!QUEUE-1 IS FULL!!!!"<<endl;
        return;
    }
    if(front1 == -1 and rear1 == -1)
    {
        front1++;
        rear1++;
        QUEUE[rear1] = element;
        return;
    }
    rear1++;
    QUEUE[rear1]=element;
}

//delette elements from QUEUE-1
void deQueue1()
{
    if(front1 == -1)
    {
        cout<<"!!!!QUEUE-1 is empty_ Nothing to delete here!!!!!"<<endl;
        return;
    }
    if(front1 == rear1)
    {
        cout<<QUEUE[front1]<<" DELETED"<<endl;
        front1=-1;
        rear1=-1;
        return;
    }
    if(front1 == SIZE/2)
    {
        front1=-1;
        rear1=-1;
        return;
    }
    cout<<QUEUE[front1]<<" DELETED"<<endl;
    front1=front1+1;
}


void displayQueue1()
{
    int tempFront1=front1;
    if(front1 == -1)
    {
        cout<<"QUEUE-1 IS EMPTY!!_ Nothing to share here"<<endl;
        return;
    }
    while(tempFront1 != SIZE/2)
    {
        cout<<QUEUE[tempFront1]<<" ";
        tempFront1++;
    }
    cout<<endl;
}


//*************************Queue-2 functions *******************

void enQueue2(int element)
{
    if(rear2 == SIZE-1)
    {
        cout<<"QUEUE-2 IS FULL!!!! CAN'T INSERT !!!"<<endl;
        return;
    }
    if(front2 == SIZE/2-1 && rear2 == SIZE/2-1)
    {
        front2++;
        rear2++;
        QUEUE[rear2] = element;
        return;
    }
    rear2++;
    QUEUE[rear2] = element;
}

void deQueue2()
{
    if(front2 == SIZE)
    {
        cout<<"QUEUE-2 IS EMPTY!! Nothing to delete !!"<<endl;
        return;
    }
    if(front2 == SIZE/2-1)
    {
        cout<<"QUEUE-2 IS EMPTY!! Nothing to delete !!"<<endl;
        return;
    }
    if(front2 == rear2)
    {
        cout<<QUEUE[front2]<<" DELETED"<<endl;
        front2=SIZE/2-1;
        rear2=SIZE/2-1;
        return;
    }
    cout<<QUEUE[front2]<<" DELETED"<<endl;
    front2++;
}

void displayQueue2()
{
    int tempFront2=front2;
    if(tempFront2 == SIZE/2-1)
    {
        cout<<"QUEUE-2 IS EMPTY!!! Nothing to show!!"<<endl;
        return;
    }
    while(tempFront2 != SIZE)
    {
        cout<<QUEUE[tempFront2]<<" ";
        tempFront2 = tempFront2+1;
    }
    cout<<endl;
}

int main()
{
    enQueue1(1);
    enQueue1(2);
    enQueue1(3);
    enQueue1(4);
    
    displayQueue1();
    deQueue1();
    deQueue1();
    deQueue1();
    deQueue1();
    displayQueue1();
//*******************************
    
    enQueue2(-2);
    enQueue2(-3);
    enQueue2(-4);
    enQueue2(-5);
    enQueue2(-4);
    displayQueue2();
    
    deQueue2();
    deQueue2();
    deQueue2();
    deQueue2();
    deQueue2();
    
    displayQueue2();
}