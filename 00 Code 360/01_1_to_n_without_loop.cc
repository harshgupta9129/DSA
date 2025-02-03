#include<bits/stdc++.h>
using namespace std;
void integer (int x, int n,vector<int> &arr)  {
    if (n > x) return;
    arr.push_back(n);
    n = n + 1;
    integer (x,n,arr);
}

vector<int> printNos(int x) {
    vector <int> arr;
    integer (x,1,arr);
    return arr;
}
int main() {
    vector <int> a = printNos(10);
    for (int i=0; i<a.size(); i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}