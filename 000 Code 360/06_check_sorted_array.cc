#include<bits/stdc++.h>
using namespace std;
int isSorted(int n, vector<int> a) {
    for (int i=0; i<a.size(); i++) {
        if (a[i-1]>a[i]) return 0;
    }
    return 1;
}

int main() {
    cout<<isSorted(5,{1,2,3,4,5})<<endl;
    cout<<isSorted(5,{1,2,5,3,4})<<endl;
    return 0;
}