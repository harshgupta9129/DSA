#include<bits/stdc++.h>
using namespace std;
int binarySearch(int n) {
    if (n == 0 || n == 1) return n;  // Handle small cases

    int s = 0, e = n, ans = 1;
    while (s <= e) {
        long long mid = s + (e - s) / 2;
        long long squ = mid * mid;

        if (squ == n) return mid;  // Exact square root found

        if (squ < n) {  // Move right
            ans = mid;
            s = mid + 1;
        } else {  // Move left
            e = mid - 1;
        }
    }
    return ans;  // Floor square root
}
int mySqrt(int x) {
    return binarySearch(x);
}

int main() {
    cout<<mySqrt(5)<<endl;
    return 0;
}