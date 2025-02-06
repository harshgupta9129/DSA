#include<iostream>
using namespace std;
int fac (int n) {
    if (n==1 ||n==0) return 1;
    int ans = 1;
    for (int i=n; i>1; i--) {
        ans = ans * i;
    }
    return ans;
}
int ncr (int n,int r) {
    return (fac(n)/(fac(r)*fac(n-r)));
}
int main() {
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
    return 0;
}