#include<bits/stdc++.h>
using namespace std;
int getpivotindex (vector <int> &arr) {
    int n = arr.size();
    int si = 0, ei = n-1;
    int mid = si + (ei-si)/2;
    while (si<ei) {
        if (arr[mid]>=arr[0]) si = mid+1;
        else ei = mid;
        mid = si + (ei -si)/2;
    }
    return si;
}
int main() {
    vector <int> arr = {1,3};
    cout<<getpivotindex(arr);
    return 0;
}