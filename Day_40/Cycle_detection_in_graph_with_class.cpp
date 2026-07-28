#include<iostream>
#include<map>
#include<vector>
using namespace std;


class Graph{
    map<int,vector<int> > graph;
public:

    void addEdge(int u,int v){
        graph[u].push_back(v);
    }

    bool DFS(int node,map<int,bool> &visited,map<int,bool>&recStack){
        visited[node]=true;
        recStack[node]=true;
        for(auto neighbour : graph[node]){
            if(!visited[neighbour]){
                if(DFS(neighbour,visited,recStack))
                    return true;
            }     
            else if(recStack[neighbour]){
                return true;
            }
        }
        recStack[node]=false;
        return false;
    }

    bool detectCycle()
    {
        map<int,bool> visited;
    	map<int,bool> recStack;

        for(auto x : graph){
            if(!visited[x.first])
{
                if(DFS(x.first,visited,recStack))
                    return true;
            }
        }

        return false;
    }
};

int main()
{
    Graph g;

    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,2);

    if(g.detectCycle())
        cout<<"Cycle Found";
    else
        cout<<"No Cycle";

    return 0;
}