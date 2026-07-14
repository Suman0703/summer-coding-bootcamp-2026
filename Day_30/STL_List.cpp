#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    list<int> l;
    
    l.push_back(20);
    l.push_back(30);
    l.push_front(10);
    l.push_front(5);

    cout<<"Original List\n";
    for(auto x:l)
        cout<<x<<" ";

    cout<<"\n\nFront : "<<l.front();
    cout<<"\nBack : "<<l.back();
    cout<<"\nSize : "<<l.size();

    l.pop_front();
    l.pop_back();

    cout<<"\n\nAfter pop_front() & pop_back()\n";
    for(auto x:l)
        cout<<x<<" ";

    l.insert(next(l.begin()),100);

    cout<<"\n\nAfter insert()\n";
    for(auto x:l)
        cout<<x<<" ";

    l.remove(100);

    cout<<"\n\nAfter remove(100)\n";
    for(auto x:l)
        cout<<x<<" ";

    l.push_back(40);
    l.push_back(25);
    l.push_back(15);

    l.sort();

    cout<<"\n\nAfter sort()\n";
    for(auto x:l)
        cout<<x<<" ";

    l.reverse();

    cout<<"\n\nAfter reverse()\n";
    for(auto x:l)
        cout<<x<<" ";

    cout<<"\n\nForward Iterator\n";
    for(auto it=l.begin();it!=l.end();it++)
        cout<<*it<<" ";

    cout<<"\n\nReverse Iterator\n";
    for(auto it=l.rbegin();it!=l.rend();it++)
        cout<<*it<<" ";

    cout<<"\n\nEmpty : "<<l.empty();

    l.clear();

    cout<<"\nAfter clear()";
    cout<<"\nSize : "<<l.size();

    return 0;
}
