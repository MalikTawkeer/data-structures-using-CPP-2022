// STACK IMPLEMENTATION USING ARRAY
#include<iostream>
using namespace std;
#define SIZE 5
int top=-1;
int stack[SIZE-1];

void push(int element)
{
    if(top == SIZE-1)
    {
        cout<<"\n\nStack Overflow !!"<<endl;
    }
    else
    {
        top=top+1;
        stack[top]=element;
    }
}

void pop()
{
    if(top == -1)
    {
        cout<<"\n!!!Stack Underflow!!!"<<endl;
    }
    else
    {
        cout<<"\n"<<stack[top]<<" Popped"<<endl;
        top--;
    }
}

void display()
{
    int tempTop=top;
    cout<<endl;
    while(tempTop != -1)
    {
        
        cout<<" "<<stack[tempTop]<<endl;
        tempTop--;
    }
}

int main()
{
    push(11);
    push(12);
    push(13);
    push(14);
    push(15);
    cout<<"Stack elements: "<<endl;
    display();

    pop();
    pop();
    display();
    
}