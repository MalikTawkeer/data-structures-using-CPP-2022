// DEQUEUE IMLPEMENTAION USING CIRCULAR QUEUE
#include <iostream>
using namespace std;
#define SIZE 5
int dequeue[SIZE];
int front = -1;
int rear = -1;

// insert item at front of queue
void insertFront(int element)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        dequeue[front] = element;
    }
    else if (front == 0)
    {
        front = SIZE - 1;
        dequeue[front] = element;
    }
    else if (rear == SIZE - 1 && front == 0 || rear + 1 == front)
    {
        cout << "QUEUE FULL !!" << endl;
    }
    else
    {
        front--;
        dequeue[front] = element;
    }
}

// insert at rear
void insertRear(int element)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        dequeue[front] = element;
    }
    else if (rear == SIZE-1)
    {
        rear = 0;
        dequeue[rear] = element;
    }
    else if (front == 0 && rear == SIZE-1 || front == rear + 1)
    {
        cout<<"QUEUE FULL!!";
    }
    else
    {
        rear++;
        dequeue[rear] = element;
    }
}

//get fornt
void getFront()
{
    cout<<"FRONT OF DEQUEUE IS: "<<dequeue[front]<<endl;
}

//get rear
void getRear()
{
    cout<<"REAR OF DEQUEUE IS: "<<dequeue[rear]<<endl;
}

// displayQueue
void displayDequeue()
{
    int f = front;
    if (front == -1 && rear == -1)
    {
        cout << "DEQUEUE EMPTY!!" << endl;
    }
    else
    {
        while (f != rear)
        {
            cout << dequeue[f] << " ";
            f = (f + 1) % SIZE;
            // diplay front element
            if(f == rear)
            {
                cout<<dequeue[f]<<" ";
            }
        }

        cout << endl;
    }
}

//delete from front
void deleteFront()
{

    if(front == -1 and rear == -1)//if dequeue is empty
    {
        cout<<"dequeue is empty!! "<<endl;
    }else if(front == rear) // if there is only one element in dequeue
    {
        cout<<dequeue[front]<<" f-deleted"<<endl;
        front = rear = -1;
    }else{ 
        cout<<dequeue[front]<<" ";
        front = (front+1) % SIZE;
    }
}

//delete from rear
void deleteRear()
{
    if(front == -1 && rear == -1)
    {
        cout<<"DEQUEUE IS EMPTY!!"<<endl;
    }else if(front == rear){
        cout<<dequeue[rear]<<" "<<endl;
        front = rear = -1;
    }else if(rear == 0)
    {
        cout<<dequeue[rear]<<" ";
        rear = SIZE-1;
    }else{
        cout<<dequeue[rear]<<" ";
        rear--;
    }
}

int main()
{
    
    insertFront(1);
    // insertFront(2);
    insertFront(3);
    insertFront(4);
    insertFront(5);

    displayDequeue();
    insertRear(1000);
    insertRear(88);
    displayDequeue();

    getFront();
    getRear();

    deleteFront();
    deleteFront();
    deleteFront();
    deleteFront();
    deleteFront();
    displayDequeue();

    insertFront(200);
    insertFront(900);
    insertFront(2000);
    insertRear(90);
    insertRear(20);
    
    displayDequeue();
    insertFront(3);

    deleteRear();
    deleteRear();
    deleteRear();
    deleteRear();
    deleteRear();
    deleteRear();
}
