// paranthesis checker implementation
// by using a programmer defined stack
#include<iostream>
using namespace std;
#define SIZE 3
char STACK[SIZE-1];
int top = -1;

//push stack code
void push(char symbol)
{
    if(top == -1)
    {
        top++;
        STACK[top] = symbol;
        return;
    }
    if(top == SIZE-1)
    {
        cout<<"WARNING____stack overflow!!"<<endl;
        return;
    }
    top++;
    STACK[top] = symbol;
}

//pop from STACK 
void pop()
{
    if(top == -1)
    {
        cout<<"WARNING_____satck is underflow"<<endl;
        return;
    }
    cout<<STACK[top]<<"  POPPED"<<endl;
    top--;
}

//dsiplay stack 
void display()
{
    int tTop = top;
    if(top == -1)
    {
        cout<<"stack is underflow"<<endl;
        return;
    }
    cout<<endl<<"STACK ELEMENTS ARE: "<<endl;
    while(tTop != -1)
    {
        cout<<STACK[tTop]<<endl;
        tTop--;
    }
}


// actual parenthesis checker function
bool isValid(string str)
{
    //putting ist three paranthesis into stack
    for(int i=0;i<SIZE-1;i++)
    {
        push(str[i]);
    }

    // trying to put 2nd three paranthesis for checkig
    for(int j=SIZE;j<=5;j++)
    {
        if(str[j]==')')
        {
            if(STACK[top] == '(')
            {
                pop();
            }
        }else if(str[j]=='}')
        {
            if(STACK[top] == '{')
            {
                pop();
            }
        }else if(str[j] == ']')
        {
            if(STACK[top] == '[')
            {
                pop();
            }
        }

    }

    if(top == -1)
    {
        return true;
    }else{
        return false;
    }
}

int main()
{
    string parenthesisString = "{([]})";

    if(isValid(parenthesisString))
    {
        cout<<"VALID PARENTHESIS."<<endl;
    }else{
        cout<<"NOT VALID!!"<<endl;
    }
}