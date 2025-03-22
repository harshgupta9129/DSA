#include<bits/stdc++.h>
using namespace std;
//Sets
int main() {
    set <int>  s;
    s.insert(5);
    s.insert(5);
    s.insert(8);
    s.insert(5);
    s.insert(8);
    s.insert(3);
    s.insert(6);
    for (int i:s) cout<<i<<" ";
    s.erase(s.begin());
    cout<<endl;
    for (int i:s) cout<<i<<" ";
    cout<<endl;
    cout<<s.count(5)<<endl; //Check If Element Present or Not
    return 0;
}