#include<iostream>
using namespace std;
int bitwiseComplement(int n) {
    if (n==0) return 1;
    int mask = 0;
    int a = n;
    while(a!=0) {
        a=a>>1;
        mask = (mask<<1) | 1;
    }
    int ans = (~n) & mask;
    return ans;
}
int main() {
    int n = 0;
    cout<<bitwiseComplement(n);
    return 0;
}