//from code with harrays
#include<iostream>
using namespace std;

int visited[5] = {0};
int mat[5][5] = {
    {0,1,0,0,1},
    {1,0,1,1,0},
    {0,1,0,1,0},
    {0,1,1,0,1},
    {1,0,0,1,0},
};

 void DFS(int i)
 {
    visited[i] = 1;
    cout<<" "<<i;
    for(int j=0;j<5;j++)
    {
        
        if(mat[i][j] == 1 && !visited[j])
        {
            DFS(j);
        }
    }
 }
int main()
{
    DFS(4);
}