#include <iostream>
#include <vector>
#include <map>
using namespace std;

void creaGraph(map<int, vector<int>> &graph)
{
    // vertex 7
    graph[7] ={10};

    // vertex 10
    graph[10] ={7, 20};

    // vertex 20
    graph[20] ={10,26,15};

    // vertex 26
    graph[26] ={20,15};

    // vertex 15
    graph[15] ={20,26};
};

// new Edge(1,2);
int main(){

    map<int, vector<int>> graph;
    creaGraph(graph);

    for (auto n : graph [20]){
            cout << n << " ";
    } 

}
