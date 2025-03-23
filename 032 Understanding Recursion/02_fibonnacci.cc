#include<bits/stdc++.h>
using namespace std;

void fibonacci (int prevp, int prev, int n) {
    if (n<=0) return;
    int sum = prevp + prev;
    cout<<sum<<" ";
    fibonacci(prev,sum,n-1);
}
int main () {
    int n;
    cout<<"Enter The Value Of n : ";
    cin>>n;
    fibonacci(1,0,n);
    return 0;
}