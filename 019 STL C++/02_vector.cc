#include<bits/stdc++.h>
using namespace std;
int main() {
    vector <int> a = {1,2,3,4};
    cout<<"The Capacity is : "<<a.capacity()<<endl;
    a.push_back(5);
    cout<<"The Capacity is : "<<a.capacity()<<endl;
    cout<<"The Size is : "<<a.size()<<endl;
    for (int i:a) cout<<i<<" ";
    cout<<endl;
    a.pop_back();
    for (int i:a) cout<<i<<" ";
    cout<<endl;
    vector <int> b(5,1);
    for (int i:b) cout<<i<<" ";
    cout<<endl;
    return 0;
}