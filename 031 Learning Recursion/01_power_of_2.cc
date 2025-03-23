#include<bits/stdc++.h>
using namespace std;

int power(int n) {
    if (n==1) return 2;
    return 2*power(n-1);
}

int main () {
    int n;
    cout<<"Enter The Value Of n : ";
    cin>>n;
    cout<<"Ans is : "<<power(n)<<endl;
    return 0;
}