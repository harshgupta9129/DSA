#include<bits/stdc++.h>
using namespace std;
//Map
int main() {
    map<int,string> m;
    m[1]="Harsh";
    m[2]="Hello";
    m[3]="Prince";
    m.insert({5,"Rahul"});

    for (auto i:m) cout<<i.first<<"->"<<i.second<<endl ;
    return 0;
}