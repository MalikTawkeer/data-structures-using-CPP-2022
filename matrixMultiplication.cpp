// MATRIX MULTIPLICATION
#include<iostream>
using namespace std;
int ROW=3;
int COl=3;
int main()
{
    int matrix1[ROW][COl],matrix2[ROW][COl],matrix3[ROW][COl];

    //input array elements for matrix 1
    cout<<"Enter elements for matrix 1"<<endl;
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COl;j++)
        {
            cout<<"Enter element for "<<"["<<i<<"]"<<"["<<j<<"] ";
            cin>>matrix1[i][j];
        }
    }

    //input array elements for matrix 2
    cout<<"Enter elements for matrix 2"<<endl;
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COl;j++)
        {
            cout<<"Enter element for "<<"["<<i<<"]"<<"["<<j<<"] ";
            cin>>matrix2[i][j];
        }
    }

    //display mat 1 and mat 2
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COl;j++)
        {
            cout<<" "<<matrix1[i][j];
        }
        cout<<endl;
    }
    cout<<"****************************************"<<endl;
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COl;j++)
        {
            cout<<" "<<matrix2[i][j];
        }
        cout<<endl;
    }


    //multiplication code.....
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COl;j++)
        {
           // matrix3[j][i]=matrix1[j][i]*matrix2[i][j];
           for(int l=0;l<COl;l++)
           {
            matrix3[l][j]=matrix1[l][j]*matrix2[j][l];
           }
        }
    }
}