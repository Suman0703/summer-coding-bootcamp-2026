//Map
#include <iostream>
#include <vector>
#include <map>
using namespace std;

// new Edge(1,2);
int main()
{
    map<int, vector<int> > mp = {
        {10, {10,20,30}},
        {20, {11,22,23}},
        {30, {24,22,21}}
    };

    // mp[103]= "Sita";
    // cout << mp[103];

    for (auto a : mp){
            cout << a.first << " ";
            for(auto val:a.second)
                cout <<val <<" ";
            cout << endl;
    } 


}
