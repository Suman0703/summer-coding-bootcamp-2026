#include <iostream>
#include <map>
#include <vector>
#include <queue>
using namespace std;

map<int, vector<int>> graph;
map<int,bool>visited;
void addNode(int node1,int node2)
{
    graph[node1].push_back(node2);
    graph[node2].push_back(node1); 
}

void displayGraph()
{
    cout<<"\n========== Node Network ==========\n\n";

    for(auto node : graph)
    {
        cout<<node.first<<" -> ";

        for(auto neighbour : node.second)
        {
            cout<<neighbour<<" ";
        }

        cout<<endl;
    }
}

void findPath(int curr, int target, string path, map<int, bool>&visited){
    if(curr == target){
        cout << path << endl;
        return;
    }else{
        visited[curr] = true;
        for( auto a:graph[curr]){
            if(!visited[a]){
                findPath(a,target,path +"->"+to_string(a),visited);
            }
        }
        visited[curr] = false;
    }
}

int main() 
{
    addNode(10,20);
    addNode(10,15);
    addNode(20,50);
	addNode(15,25);
    addNode(50,7);
    addNode(50,25);
    addNode(25,7);
//    displayGraph(); 

    // cout<<endl;

    findPath(50,7,"50",visited);

    return 0;
}
