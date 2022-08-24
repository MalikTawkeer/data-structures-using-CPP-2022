// sparse matrix
//reduced sparse matrix
#include<iostream>
using namespace std;

int main()
{
    int sparseMatrix[3][4]={ {1,0,0,2}, //1 row
                             {0,0,3,4}, //2 row
                             {1,2,0,0}}; //3 row
int size=0; //used for reduced matrix as col or row size

// counting non zero values
for (int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
    {
        if(sparseMatrix[i][j] != 0)
        {
            size++;
        }
    }
}
int reducedMatrix[3][size];
int k=0;
//assigning non zero elements to reducedMatrix
for(int i=0;i<3;i++) // row
{
    for(int j=0;j<4;j++)
    {
        if(sparseMatrix[i][j] !=0)
        {
            reducedMatrix[0][k]=i;
            reducedMatrix[1][k]=j;
            reducedMatrix[2][k]=sparseMatrix[i][j];
            k++;
        }
    }
}
//displaying reduced sparse matrix
for(int i=0;i<3;i++)
{
    for(int j=0;j<size;j++)
    {
        cout<<" "<<reducedMatrix[i][j];
    }
    cout<<endl;
}

    return 0;
}