// stack implementation using array attempt-2
#include<iostream>
using namespace std;
#define size 5
int top = -1;
int stack[size-1];

/* // function to check stack is empty or not
bool isEmpty()
{
    if(top==-1)
    {
        return true;
    }
    else{
        return false;
    }
} */

//function to push elements into a stack 
void push(int data)
{
    if(top == size-1)
    {
        cout<<"stack overflow!!"<<endl;
        return;
    }
    top=top+1;
    stack[top]=data;
}

void pop()
{
    if(top == -1)
    {
        cout<<"stack underflow!!"<<endl;
        return;
    }
    cout<<stack[top]<<" element popped"<<endl;
    //stack[top];
    top=top-1;
}

void stackDisplay()
{
    int top1=top;
    while(top1 != -1)
    {
        cout<<stack[top1]<<endl;
        top1 = top1-1;

    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    stackDisplay();

    pop();
    pop();
    pop();
    
   stackDisplay();
   stackDisplay();



}