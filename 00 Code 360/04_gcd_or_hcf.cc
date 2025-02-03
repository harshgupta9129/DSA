#include<bits/stdc++.h>
using namespace std;
int calcGCD(int n, int m){
    int min;
    if (n>m) min = n;
    else min = m;
    int GCD = 1;
    for (int i = 1; i<=min; i++) {
        if (n%i==0 && m%i==0) GCD = i;
    }
    return GCD;
}
int main() {
    cout<<calcGCD(4,6)<<endl;
    return 0;
}