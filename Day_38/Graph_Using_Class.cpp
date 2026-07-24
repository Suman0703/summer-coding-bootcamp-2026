#include <iostream>
#include <vector>
using namespace std;

class Edge
{
    int src;
    int des;

    public:
    Edge(int src, int des)
    {
        this->src = src;
        this->des = des;
    }

    int showDes(){
        return des;
    }
};

void creaGraph(vector<Edge *> arr[])
{
    // vertex 0
    arr[0].push_back(new Edge(0, 2));

    // vertex 1
    arr[1].push_back(new Edge(1, 2));
    arr[1].push_back(new Edge(1, 3));

    // vertex 2
    arr[2].push_back(new Edge(2, 1));
    arr[2].push_back(new Edge(2, 3));
    arr[2].push_back(new Edge(2, 0));

    // vertex 3
    arr[3].push_back(new Edge(3, 1));
    arr[3].push_back(new Edge(3, 2));
};

// new Edge(1,2);
int main()
{

    int v = 4;
    vector<Edge *> arr[v];
    creaGraph(arr);

    for(int i = 0; i < arr[3].size(); i++){
        Edge* n = arr[3][i];
        cout << n -> showDes() <<" "<<endl;
    }
    return 0;
}

