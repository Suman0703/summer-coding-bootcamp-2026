#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Graph{
    map<int, vector<int>> graph;

public:

    void addEdge(int u, int v){
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    bool DFS(int curr, int parent, map<int,bool> &visited){
        visited[curr] = true;

        for(auto neighbour : graph[curr]){

            // If neighbour is not visited, visit it
            if(!visited[neighbour]){
                if(DFS(neighbour, curr, visited))
                    return true;
            }

            // If neighbour is visited and is not the parent
            else if(neighbour != parent){
                return true;
            }
        }

        return false;
    }

    bool detectCycle(){
        map<int,bool> visited;

        for(auto node : graph){
            if(!visited[node.first]){
                if(DFS(node.first, -1, visited))
                    return true;
            }
        }

        return false;
    }
};

int main(){

    Graph g;

    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,2);

    if(g.detectCycle())
        cout << "Cycle Found";
    else
        cout << "No Cycle";

    return 0;
}