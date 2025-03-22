#include<bits/stdc++.h>
using namespace std;
int main() {
    deque <int> a={4,5,6,7,8};
    a.push_back(1);
    a.push_front(2);
    cout<<"At Index 1 is : "<<a.at(1)<<endl;
    cout<<"Front Element is : "<<a.front()<<endl;
    a.erase(a.begin(),a.begin()+2);
    for (int i:a) cout<<i<<" ";
    return 0;
}