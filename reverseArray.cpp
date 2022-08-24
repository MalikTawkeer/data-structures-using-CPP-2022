// using only one array and i,j
/* by ku developers hub 
25/06/2022 - 2:04pm */

#include<iostream>
using namespace std;

int main()
{
    int array[5]={0};
    int i;
    int size=5;
    int j=size;
    
    //inserting element into an array
    for(i=0;i<5;i++)
    {
        cout<<"Enter array elements for index["<<i<<"]:- ";
        cin>>array[i];
    }
    //reverseing array code..
    while(i > j)
    {
        int temp;
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
    

    //displaying elements of an array
     //inserting element into an array
    for(i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }

}
