#include<bits/stdc++.h>
using namespace std;
int main() {
    list <int> l={1,2,3,4,5};
    l.push_back(1);
    l.push_back(2);
    for (int i:l) cout<<i<<" ";
    cout<<endl;
    l.erase(l.begin());
    for (int i:l) cout<<i<<" ";
    cout<<endl;
    cout<<"Size Of List : "<<l.size()<<endl;
    return 0;
}