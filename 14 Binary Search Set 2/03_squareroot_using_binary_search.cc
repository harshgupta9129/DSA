#include<bits/stdc++.h>
using namespace std;
int mysqrt (int num) {
    int si = 0, ei = num;
    while (si<ei) {
        int mid = si + (ei - si)/2;
        if (mid*mid==num) return mid;
        if (mid*mid<num) si = mid + 1;
        else ei = mid;
    }
    return -1;
}
int main() {
    cout<<mysqrt(10000)<<endl;
    return 0;
}