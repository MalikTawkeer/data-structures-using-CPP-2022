// insert element at any position in an array
#include<iostream>
using namespace std;


//insert element at any position
void insertAtPosition(int pos,int arr[],int n,int val)
{
    for(int i = n-1;i>=pos;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = val;

}

void display(int arr[])
{
    for (int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[15] = {1,2,3,4,5,6};
    cout<<"before insertion:"<<endl;
    display(arr);
    insertAtPosition(2,arr,6,100);
    insertAtPosition(4,arr,6,100);

    cout<<"After insertion:"<<endl;
    display(arr);
}

