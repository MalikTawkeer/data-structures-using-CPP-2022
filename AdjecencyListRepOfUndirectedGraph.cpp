// Adjacency list representation of  grpah
#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adjacencyList;

    void addEdge(int v, int e, int direction)
    {
        adjacencyList[v].push_back(e);
        if (direction == 0)
        {
            adjacencyList[e].push_back(v);
        }
    }

    void displayList()
    {
        for (auto i : adjacencyList) // accesses the key or vertex
        {
            cout << i.first << "-> "; // displaying vertex
            for (auto j : i.second)   // accesses the incidence vertices list
                cout << j << ", ";
            cout << endl;
        }
    }
};

int main()
{

    Graph graph;            // creating graph obj
    graph.addEdge(0, 1, 0); // (vertex, edge, direction)
    graph.addEdge(0, 4, 0);

    graph.addEdge(1, 2, 0);
    graph.addEdge(1, 3, 0);

    graph.addEdge(2, 3, 0);

    graph.addEdge(3, 4, 0);

    graph.displayList();
}