#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int, vector<int>> graph;

void addNode(int node1, int node2)
{
    graph[node1].push_back(node2);
    graph[node2].push_back(node1);
}

void displayGraph()
{
    cout << "\n========== NODE NETWORK ==========\n\n";

    for (auto node : graph)
    {
        cout << node.first << "->";

        for (int neighbour : node.second)
        {
            cout << neighbour << " ";
        }

        cout << endl;
    }
}

void showNode(int node)
{
    cout << "\nNEIGHBOURS FROM NODE: " << node << "\n";

    for (int neighbour : graph[node])
    {
        cout << neighbour << endl;
    }
}

int main()
{
    addNode(10, 20);
    addNode(10, 15);
    addNode(20, 50);
    addNode(15, 25);
    addNode(50, 25);
    addNode(50, 7);
    addNode(25, 7);

    displayGraph();

    showNode(10);

    return 0;
}
