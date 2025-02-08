#include<bits/stdc++.h>
using namespace std;
int main() {
    //max heap
    priority_queue<int> maxi;

    //min - heap
    priority_queue<int,vector<int>,greater <int> > mini;
    maxi.push(3);
    maxi.push(2);
    maxi.push(6);
    maxi.push(0);
    for (int i=0; i<4; i++) {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(3);
    mini.push(2);
    mini.push(6);
    mini.push(0);
    for (int i=0; i<4; i++) {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    return 0;
}