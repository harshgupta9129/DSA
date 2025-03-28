#include<bits/stdc++.h>
using namespace std;

int sum_all (int a[], int n) {
    if (n==1) return a[0];
    int temp = sum_all(a+1, n-1);
    return a[0] + temp;
}

int main () {
    int a[] = {9,3,7,2,1,8,6,4,5};
    int n = 9;
    cout<<sum_all(a,n);
    return 0;
}