// Matrix Transpose
/*  1 2 3             1 4
    4 5 6    TO-->    2 5
                      3 6     */

#include<iostream>
#define ROW 2
#define COL 3
using namespace std;


int main()
{
    int a[ROW][COL],x,y;

    //inserting data into an array a[][]
    for(x=0;x<ROW;x++)//ROW
    {
        for(y=0;y<COL;y++)//COLOUM
        {
            cout<<"ENTER ELEMENT FOR ["<<x<<"]"<<"["<<y<<"]"<<endl;
            cin>>a[x][y];
        }
    }

    // Displaying array
    cout<<"***************the matrix is :-*************\n\n"<<endl;
    for(x=0;x<ROW;x++)
    {
        for(y=0;y<COL;y++)
        {
            cout<<" \t"<<a[x][y]<<" ";
        }
        cout<<endl;
    }

    // code for transposing a matrix
    cout<<"******************* TRANSPOSED MATRIX ******************"<<endl;
    for(x=0;x<COL;x++)
    {
        for(y=0;y<ROW;y++)
        {
            cout<<a[y][x]<<" ";
        }
        cout<<endl;
    }

    return 0;

}

