// PROGRAM TO REDUCE SPARSE MATRIX TO MAKE IT EFFICIENT

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int sparseMatrix[4][4]={1,0,0,2, //ist row
                            0,0,1,4, //2nd row
                            2,0,6,5, //3rd row
                            0,0,0,0}; //4th row
    int nonZeroNumbers=0; //will be used as no. of coloums for reduced sparse matrix
    //counting non zero elements in a sparse matrix
    for(int i=0;i<4;i++) //rows
    {
        for(int j=0;j<4;j++)//coloums
        {
            if(sparseMatrix[i][j] > 0)
            {
                nonZeroNumbers ++;
            }
        }
    }
    // putting reduced matrix elements into the new matrix
    int reducedMatrix[3][nonZeroNumbers];
    int k=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<nonZeroNumbers;j++)
        {
            if(sparseMatrix[i][j] > 0)
            {
                reducedMatrix[0][k]=i;
                reducedMatrix[1][k]=j;
                reducedMatrix[2][k]=sparseMatrix[i][j];
                k++;
            }
        }
    }
    
    //counting non zero elements in a sparse matrix
    for(int i=0;i<4;i++) //rows
    {
        for(int j=0;j<4;j++)//coloums
        {
        
                cout<<i<<" "<<j<<" "<<reducedMatrix[i][j]<<" "<<endl;
            
        }
    }
    return 0;
}