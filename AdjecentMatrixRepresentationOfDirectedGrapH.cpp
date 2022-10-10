// Adjecent Matrix representation of Directed Graph
#include<iostream>
using namespace std;

class DirectedGraph
{
    public:
    int AdjMatrix[5][5];
    //add an edge 
    void addEdge(int u, int v)
    {
        int data;
        for(int i = 0; i<5 ; i++ )
        {
            for(int j = 0; j<5; j++)
            {
                cout<<"enter value for "<<"["<<i<<"]"<<"["<<j<<"] :-";
                cin>>data;
                AdjMatrix[i][j] = data;
            }
        }
    }

    void displayAdjMatrix()
    {
        for(int i = 0; i<5 ;i++)
        {
            cout<<i<<"-> ";
            for(int j=0 ;j<5;j++)
            {
                cout<<AdjMatrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    DirectedGraph directedGraph;
    
    directedGraph.addEdge(0,1);
    directedGraph.displayAdjMatrix();
}
