#include<bits/stdc++.h>
using namespace std;

int modularExponentiation(int x, int n, int m) {
    long long ans = 1;
	while(n!=0) {
        if (n&1) {
            ans = (1LL * (ans) * (x)%m)%m;
        } 
        x = (1LL * (x)%m * (x)%m)%m;
        n = n>>1;
    }
    return ans;
}

int main() {
    cout<<modularExponentiation(3,1,2)<<endl;
    cout<<modularExponentiation(4,3,10);
    return 0;
}