// DFS implementation
#include <iostream>
using namespace std;
int adjMat[5][5];

class Graph
{
    public:
    void addEdge()
    {
        int val;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << "Enter value for: [" << i << "][" << j << "]";
                cin >> adjMat[i][j];
                // adjMat[i][j] = val;
            }
        }
    }
    
    void diplayGraph()
    {
        for(int i=0;i<5; i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<adjMat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Graph graph;
    graph.addEdge();
    graph.diplayGraph();
    
}