// adjacency list rep of graph ATTEMPT-3
#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class Graph
{
    unordered_map <int ,list<int>> adjacencyList;

    public:

    //represention un-directed graph
    void addEdge(int vertex, int edge, int direction)
    {
        adjacencyList[vertex].push_back(edge);
        // check for direction if 0 directed graph, if 1 directed graph
        if(direction == 0)
        {
            adjacencyList[edge].push_back(vertex);
        }
    }

    //displaying adjacency list
    void displayAdjList()
    {
        for(auto i : adjacencyList)
        {
            cout<<i.first<<"-> ";
            for(auto j : i.second)
            {
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }   
};

int main()
{
    Graph graph;
    graph.addEdge(1,2,0);
    graph.addEdge(1,3,0);
    graph.addEdge(1,4,0);
    graph.addEdge(2,4,0);
    graph.addEdge(3,4,0);
    graph.displayAdjList();
}