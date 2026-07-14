#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;

    // Insert
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout<<"Original Vector\n";
    for(auto x:v)
        cout<<x<<" ";

    cout<<"\n\nSize : "<<v.size();
    cout<<"\nCapacity : "<<v.capacity();
    cout<<"\nFront : "<<v.front();
    cout<<"\nBack : "<<v.back();

    cout<<"\n\nUsing Iterator\n";
    for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";

    v.insert(v.begin()+2,100);

    cout<<"\n\nAfter insert()\n";
    for(auto x:v)
        cout<<x<<" ";

    v.erase(v.begin()+3);

    cout<<"\n\nAfter erase()\n";
    for(auto x:v)
        cout<<x<<" ";

    v.pop_back();

    cout<<"\n\nAfter pop_back()\n";
    for(auto x:v)
        cout<<x<<" ";

    sort(v.begin(),v.end());

    cout<<"\n\nAfter sort()\n";
    for(auto x:v)
        cout<<x<<" ";

    reverse(v.begin(),v.end());

    cout<<"\n\nAfter reverse()\n";
    for(auto x:v)
        cout<<x<<" ";

    auto it=find(v.begin(),v.end(),20);

    if(it!=v.end())
        cout<<"\n20 Found";
    else
        cout<<"\n20 Not Found";

    cout<<"\nCount of 20 : "<<count(v.begin(),v.end(),20);

    cout<<"\n\nReverse Iterator\n";
    for(auto it=v.rbegin();it!=v.rend();it++)
        cout<<*it<<" ";

    v.clear();

    cout<<"\n\nAfter clear()";
    cout<<"\nSize : "<<v.size();

    return 0;
}
