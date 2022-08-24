//matrix addition
#include<iostream>
using namespace std;
#define ROW 3
#define COL 3

int main()
{
    int mat1[ROW][COL],mat2[ROW][COL],mat3[ROW][COL];
    int l,m,n;

    cout<<"MATRIX 1:"<<endl;
    // elements for matrix 1
    for(l=0;l<ROW;l++)
    {
        for(m=0;m<COL;m++)
        {
            cout<<"Enter element for"<<"["<<l<<"]"<<"["<<m<<"] :- "<<endl;
            cin>>mat1[l][m];
        }
    }
    
    //display mat1
     for(l=0;l<ROW;l++)
    {
        for(m=0;m<COL;m++)
        {
            cout<<" "<<mat1[l][m];
        }
        cout<<endl;
    }

    cout<<"MATRIX 2:"<<endl;
    // elements for matrix 2
    for(l=0;l<ROW;l++)
    {
        for(m=0;m<COL;m++)
        {
            cout<<"Enter element for"<<"["<<l<<"]"<<"["<<m<<"] :- "<<endl;
            cin>>mat2[l][m];
        }
    }

    //display mat2
     for(l=0;l<ROW;l++)
    {
        for(m=0;m<COL;m++)
        {
            cout<<" "<<mat2[l][m];
        }
        cout<<endl;
    }

    //addition
    for(n=0;n<ROW;n++)
    {
        for(int o=0;o<COL;o++)
        {
            mat3[n][o] = mat1[n][o] + mat2[n][o];
        }
    }

    //display elements
    // elements for matrix 2
    for(l=0;l<ROW;l++)
    {
        for(m=0;m<COL;m++)
        {
            cout<<" "<<mat3[l][m];
        }
        cout<<endl;
    }
}