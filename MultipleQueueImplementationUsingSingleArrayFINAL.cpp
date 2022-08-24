//FINAL
// two queue implementstion using 1D array
//with MENU
#include<iostream>
using namespace std;

#define SIZE 8 //size for queue
int arr[SIZE-1]; // queue in which we are maintained two queues

// front and rear of QUEUE-1
int front1 = -1;
int rear1 = -1;
//front and rear of QUEUE-2
int front2 = SIZE;
int rear2 = SIZE;


/////******************** FUNCTIONS FOR QUEUE 1 *************///////
// enQueue1 func for QUEUE-1
void enQueue1()
{
    int element;
    cout<<"Enter element to insert into QUEUE-1:-  ";
    cin>>element;

    if(front1 == -1 && rear1 == -1)
    {
        front1++;
        rear1++;
        arr[rear1] = element;
        return;
    }
    if(rear1 == (SIZE/2)-1)
    {
        cout<<"Queue-1 is full!!"<<endl;
        return;
    }
    rear1++;
    arr[rear1] = element;
}

    // deQuue1 func.. for QUEUE-1
    void deQuue1()
{
    if(front1 == -1)
    {
        cout<<"Queue-1 is empty!!"<<endl;
        return;
    }
    if(front1 == rear1)
    {
        front1--;
        rear1--;
        return;
    }
    cout<<arr[rear1]<<" POPPED from QUEUE-1"<<endl;
    rear1--;
}

// display-1 for QUEUE-1
void display1()
{
    int tempFront = front1;
    if(front1 == -1)
    {
        cout<<"Queue is empty!!"<<endl;
        return;
    }
    while(tempFront != -1)
    {

        if(tempFront == SIZE/2)
        {
            return;
        }

        cout<<arr[tempFront]<<" ";
        tempFront++;        
    }
}


/////******************** FUNCTIONS FOR QUEUE 2 *************///////
// insert into QUEUE-2
void enQueue2()
{
    int element;
    cout<<"Enter element to be insert into QUEUE-2:-  ";
    cin>>element;
    // below condition when QUEUE-2 is empty
    if(front2 == SIZE && rear2 == SIZE)
    {
        front2--;
        rear2--;
        arr[rear2] = element;
        return;
    }

    if(rear2 == SIZE/2)
    {
        cout<<"QUEUE-2 is full!!"<<endl;
        return;
    }
    rear2--;
    arr[rear2] = element;
}

//deQueue2 func.. for QUEUE-2
void deQueue2()
{
    if(front2 == SIZE && rear2 == SIZE)
    {
        cout<<"QUEUE-2 is empty!!"<<endl;
        return;
    }
    if(front2 == rear2)
    {
        cout<<arr[front2]<<" DELETED FROM QUEUE-2"<<endl;
        front2 = rear2 = SIZE;
        return;
    }
    if(front2 == SIZE)
    {
        cout<<"QUEUE-2 is empty"<<endl;
        return;
    }
    cout<<arr[front2]<<" DELETED FROM QUEUE-2"<<endl;
    front2--;
}

//display2 code for QUEUE-2
void display2()
{
    int tempRear2 = rear2;
    if(tempRear2 == SIZE)
    {
        cout<<"QUEUE-2 is empty!!!"<<endl;
        return;
    }

    while(tempRear2 != SIZE)
    {
        cout<<" "<<arr[tempRear2] <<" ";
        tempRear2++;
    }


}

//menu code......
void menu()
{
     int choice;

    
    int confirm;
    while(1)
    {

    cout<<"*****MENU*****"<<endl;
    cout<<"1  push into QUEUE-1"<<endl;
    cout<<"2  display  QUEUE-1"<<endl;
    cout<<"3  pop from QUEUE-1"<<endl;
    cout<<endl;
    cout<<"4  push into QUEUE-2"<<endl;
    cout<<"5  display from QUEUE-2"<<endl;
    cout<<"6  pop from QUEUE-2"<<endl;
    cout<<endl;
    cout<<"Enter a choice:- ";
    cin>>choice;

        switch(choice)
        {
            case 1:
            enQueue1();
            break;

            case 2:
            display1();
            break;

            case 3:
                deQuue1();
            break;

            case 4:
            enQueue2();
            break;

            case 5:
            display2();
            break;
            case 6:
            deQueue2();
            break;
            default:
        
            exit(0);
        }

    }
}

int main()
{
    menu();
    return 0;
}
