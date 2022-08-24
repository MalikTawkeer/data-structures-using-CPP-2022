// Sum of n numbers using recursion
// n=5 -> 1+2+3+4+5
#include<iostream>
using namespace std;

int sumOfNumbers(int number)
{
    if(number == 1)
    {
        return 1;
    }
    else
    {
        return number + sumOfNumbers(number-1);
    }
}

int main()
{
    int number = 4;
    cout<<"Enter natural number :- ";
    cin>>number;
    cout<<"Sum Of first "<<number<<" Natural Numbers is "<<sumOfNumbers(number);

    return 0;
}