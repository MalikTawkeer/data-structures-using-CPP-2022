//implementation of two stacks using 1-D array
#include<iostream>
using namespace std;
#define SIZE 8
int top1=-1; // ist stack top
int top2 = SIZE/2-1; // second stack top
int STACK[SIZE-1];


//insert elements into stack-1
void push1(int element)
{
    if(top1 == 3)
    {
        cout<<"STACK-1 OVERFLOW !!"<<endl;
        return;
    }
    
    top1 = top1+1;
    STACK[top1] = element;
}

//pop from STACK-1
void pop1()
{
    if(top1 == -1)
    {
        cout<<"STACK-1 IS UNDERFLOW"<<endl;
        return;
    }
    cout<<STACK[top1]<<" POPPED"<<endl;
    top1 = top1-1;
}

//displaying elements of STACK-1
void displayStack1()
{
    int tempTop=top1;
    if(top1 == -1)
    {
        cout<<"STACK-1 IS UNDERFLOW"<<endl;
        return;
    }
    while(tempTop != SIZE/2)
    {
        cout<<STACK[tempTop]<<endl;
        tempTop--;
        if(tempTop == -1)
        {
            return;
        }
    }
}


//**********************CODE FOR STACK-2********


//insert elements into STACK-2
void push2(int element)
{
    if(top2 == 7)
    {
        cout<<"STACK-2 OVERFLOW!!!"<<endl;
        return;
    }
    top2 = top2+1;
    STACK[top2] = element;
}

//delete elements from STACK-2
void pop2()
{
    if(top2 == 3)
    {
        cout<<"STACK-2 UNDERFLOW!!"<<endl;
        return;
    }
    cout<<STACK[top2]<<" POPPED"<<endl;
    top2 = top2-1;
}

//diplaying elemets of stack-2
void displayStack2()
{
    cout<<"**********SATCK-2 elements *******"<<endl;
    int tempTop2=top2;
    if(tempTop2 == 3)
    {
        cout<<"STACK-1 UNDERFLOW!!!"<<endl;
        return;
    }
    while(tempTop2 != (SIZE/2)-1)
    {
        cout<<STACK[tempTop2]<<endl;
        tempTop2 = tempTop2-1;
    }
}

int main()
{
    push1(1);
    push1(2);
    push1(3);
    push1(4);
    push1(5);

    displayStack1();

    pop1();
    pop1();
    displayStack1();
    //***************stack-2 operations*****
    push2(1);
    push2(2);
    push2(3);
    push2(4);

    displayStack2();

    pop2();
    pop2();
    pop2();
    pop2();
    pop2();
}


