#include<iostream>
using namespace std;
bool isPowerOfTwo(int n) {
    long long int pow2=1;
    for (int i=1; i<=31; i++) {
        if (n<pow2) return 0;
        if (n==pow2) return 1;
        pow2*=2;
    }
    return 0;
}
int main() {
    int n = 64;
    cout<<isPowerOfTwo;
    return 0;
}