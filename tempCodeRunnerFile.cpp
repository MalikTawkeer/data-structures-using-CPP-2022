// Queue implementation using two stacks
#include<iostream>
using namespace std;
#define SIZE 5
int top1=-1;
int top2=-1;
int STACK1[SIZE-1];// stack 1
int STACK2[SIZE-1];// stack 2


void push1(int e)
{
    if(top1 == SIZE-1)
    {
        cout<<"STACK OVERFLOW!!"<<endl;
        return;
    }
    ++top1;
    STACK1[top1] = e;
}

void pop1()
{
    if(top1 == -1)
    {
        cout<<"Stack underflow!!!"<<endl;
        return;
    }
    cout<<STACK1[top1]<<" POPPED"<<endl;
    --top1;
}

void displayStack1()
{
    int top=top1;
    while(top != -1)
    {
        cout<<STACK1[top]<<" "<<endl;
        top--;
    }
    cout<<endl;
}


int main()
{
    push1(20);
    push1(30);
    push1(40);
    push1(50);
    push1(60); 
    displayStack1();
// pop1();
// pop1();
// pop1();
// pop1();
// pop1();
// pop1();
// displayStack1();
}