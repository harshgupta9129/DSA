#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
    if (n==0||n==1||n==2) return 0;
    vector <bool> isprime(n,true);
    isprime[0] = isprime[1] = false;
    int count = 0;
    for (int i=2; i<n; i++) {
        if(isprime[i]) {
            count++;
            for (int j=2*i; j<n; j=j+i) {
                isprime[j] = false;
            }
        }
    }
    return count;
}

int main() {
    cout<<countPrimes(200)<<endl;    
    return 0;
}