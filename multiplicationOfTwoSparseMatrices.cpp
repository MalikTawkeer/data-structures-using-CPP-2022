// MULTIPLICATION OF TWO SPARSE MATRICES
#include<iostream>
using namespace std;
#define ROW 3
#define COL 3
int main()
{
    int sparseMatrix_1[ROW][COL],sparseMatrix_2[ROW][COL];// two sparse matrices
    int nonZeroCount_1,nonZeroCount_2;
    int zeroCount_1,zeroCout_2;
    nonZeroCount_1=0;
    nonZeroCount_2=0;
    zeroCount_1=zeroCout_2=0;
cout<<"*****************************************************************************\n";
    // ENTERING ELEMENTS OF SPARSE MATRIX 1
    cout<<"ENTER ELEMENTS OF sparse matrix-1 (3 x 3):-\n\t";
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            cin>>sparseMatrix_1[i][j];
        }

        cout<<"\t";
    }
cout<<"*****************************************************************************\n";
    // ENTERING ELEMENTS OF SPARSE MATRIX 2
    cout<<"ENTER ELEMENTS OF sparse matrix-2 (3 x 3):-\n\t";
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            cin>>sparseMatrix_2[i][j];
        }

        cout<<"\t";
    }
 cout<<"*****************************************************************************\n";
    //counting number of non zero elements of sparse matrix-1 and parse matrix-1
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            if(sparseMatrix_1[i][j] != 0)
            {
                 nonZeroCount_1 ++; // cout for mat1
            }else{
                zeroCount_1++;
            }
           if(sparseMatrix_2[i][j] != 0)
           {
               nonZeroCount_2 ++;  // count for mat2
           }else{
               zeroCout_2++;
           }
        }
    }
    cout<<"\n non zero elements in sparse matrix-1:"<<nonZeroCount_1<<endl;
    cout<<"\n non zero elements in sparse matrix-2:"<<nonZeroCount_2<<endl;

//checking for sparse matrix and reduce matrices
    int reducedMat1[ROW][nonZeroCount_1],reducedMat_2[ROW][nonZeroCount_2];
    int x=0,y=0;
   if(zeroCount_1 > nonZeroCount_1)
   {
       cout<<"\n YES saprse mat-1 is sparse matrix:"<<endl;
       //reduce
       for(int i=0;i<ROW;i++)
       {
           for(int j=0;j<COL;j++)
           {
               if(sparseMatrix_1[i][j] != 0)
               {
               reducedMat1[0][x]=i;
               reducedMat1[1][x]=j;
               reducedMat1[2][x]=sparseMatrix_1[i][j];
               x++;
               }
           }
       }
   }else{
       cout<<"\n NO saprse mat-1 is not a sparse matrix:"<<endl;
   }
   if(zeroCout_2 > nonZeroCount_2)
   {
       cout<<"\n YES saprse mat-2 is sparse matrix:"<<endl;
       //reduce
       for(int i=0;i<ROW;i++)
       {
           for(int j=0;j<COL;j++)
           {
               if(sparseMatrix_2[i][j] != 0)
               {
               reducedMat_2[0][x]=i;
               reducedMat_2[1][x]=j;
               reducedMat_2[2][x]=sparseMatrix_1[i][j];
               y++;
               }
           }
       }
   }else{
       cout<<"\n NO saprse mat-2 is not a sparse matrix:"<<endl;
   }
   //DIsplaying reduced mat-1
   cout<<"\n REDUCED MATRIX-1 is:-"<<endl;
   for(int i=0;i<ROW;i++)
   {
       for(int j=0;j<nonZeroCount_1;j++)
       {
           cout<<" "<<reducedMat1[i][j];
       }
       cout<<endl;
   }

}