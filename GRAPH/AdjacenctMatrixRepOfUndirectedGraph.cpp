// adjacent matrix representation of undirected graph
#include<iostream>

using namespace std;
int V=3;
 int E=2;
class Graph
{
    int adjMatrix[5][5];

   public:

    void createAdjMatrix(int ver, int edge)
    {
        int i, j, val;
        // initilize vals into adjMatrix
        for( i = 0; i<5; i++)
        {
            for(j = 0; j<5; j++)
            {
                cout<<"enter edge for"<<"["<<i+1<<"]"<<"["<<j+1<<"]:- ";
                cin>>val;
                adjMatrix[i][j] = val;
            }
        }
    }

    void displayAdjMat()
    {
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                cout<<adjMatrix[i][j];
            }
            cout<<endl;
        }
    }
};

int main()
{
    Graph graph;
    graph.createAdjMatrix(2,4);
    graph.displayAdjMat();
}