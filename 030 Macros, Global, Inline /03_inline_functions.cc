#include<bits/stdc++.h>
using namespace std;

inline int max (int& a, int& b) {
    return (a>b) ? a : b;
}
int main() {
    int a = 1, b = 2;
    cout<<max(a,b)<<endl;
    a = a + 3;
    b = b + 1;

    cout<<max(a,b)<<endl;
    return 0;
}