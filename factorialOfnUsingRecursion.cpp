// factorial of n using recursion;
#include<iostream>
using namespace std;

int factorialOfNumber(int number)
{
    if(number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorialOfNumber(number-1);
    }
}

int main()
{
    int number;
    cout<<"Enter A Number:- ";
    cin>>number;
    cout<<"Factorial Of Number "<<number<<" Is "<<factorialOfNumber(number);
    return 0;
}