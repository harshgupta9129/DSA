#include<bits/stdc++.h>
using namespace std;

int factorial (int n) {
    
    if (n<=1) return 1; // Base Case
    return n*factorial(n-1);
}

int main () {
    int n;
    cout<<"Enter the Value of n : ";
    cin>>n;
    cout<<"Ans is : "<<factorial(n)<<endl;
    return 0;
}