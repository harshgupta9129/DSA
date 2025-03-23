#include<bits/stdc++.h>
using namespace std;

int counting (int n) {
    if (n<=0) return 0;
    return n+counting(n-1); 
}

int main () {
    int n;
    cout<<"Enter The Number : ";
    cin>>n;
    cout<<counting(n)<<endl;
    return 0;
}