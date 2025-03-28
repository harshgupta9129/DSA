#include<bits/stdc++.h>
using namespace std;

bool is_sorted (int a[], int n) {
    if (n==0 || n==1) return 1;
    if (a[0]>a[1]) return 0;
    else {
        return is_sorted(a+1,n-1);
    }
}

int main () {
    int a[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    cout<<is_sorted(a,n);
    return 0;
}