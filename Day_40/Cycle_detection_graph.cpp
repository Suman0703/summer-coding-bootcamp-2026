#include <iostream>
#include <map>
#include <vector>
#include <queue>
using namespace std;

map<int, vector<int>> graph;
map<int, bool> visited;
void addNode(int node1, int node2)
{
    graph[node1].push_back(node2);
    graph[node2].push_back(node1);
}

void displayGraph()
{
    cout << "\n========== Node Network ==========\n\n";

    for (auto node : graph)
    {
        cout << node.first << " -> ";

        for (auto neighbour : node.second)
        {
            cout << neighbour << " ";
        }

        cout << endl;
    }
}

bool DFS(int node, map<int, bool> &visited, map<int, bool> &recStack)
{
    visited[node] = true;
    recStack[node] = true;

    for (auto neighbour : graph[node])
    {
        if (!visited[neighbour])
        {
            if (DFS(neighbour, visited,recStack))
                return true;
        }else if(recStack[neighbour]){

            return true;
        }
    }

    recStack[node]=false;

    return false;
}

int main()
{
    addNode(10, 20);
    addNode(10, 15);
    addNode(20, 50);
    addNode(15, 25);
    addNode(50, 7);
    addNode(50, 25);
    addNode(25, 7);
    //    displayGraph();

    map<int, bool> recStack;
    bool hasCycle = false;

    for (auto node : graph)
    {
        if (!visited[node.first])
        {
            hasCycle = DFS(node.first, visited, recStack);
            if (hasCycle)
                break;
        }
    }

    if (hasCycle)
        cout << "Cycle detected" << endl;
    else
        cout << "No cycle detected" << endl;

    return 0;
}
