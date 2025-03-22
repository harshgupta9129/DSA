#include<bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
    int si = 0, ei = arr.size()-1;
    int mid = 0;
    while (si<=ei) {
        mid = si + (ei - si)/2;
        if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) break;
        if (arr[mid]<arr[mid+1]) si = mid + 1;
        else ei = mid;
    }
    return mid;    
}

int main() {
    vector<int> a1 = {0,1,0};
    vector<int> a2 = {0,2,1,0};
    vector<int> a3 = {0,10,5,2};
    vector <int> a4 = {3,5,3,2,0};
    vector <int> a5 = {13,25,38,55,58,75,85,88,100,94,88,82,60,58,48,43,40,35,17,2};

    cout<<peakIndexInMountainArray(a1)<<endl;
    cout<<peakIndexInMountainArray(a2)<<endl;
    cout<<peakIndexInMountainArray(a3)<<endl;
    cout<<peakIndexInMountainArray(a4)<<endl;
    cout<<peakIndexInMountainArray(a5)<<endl;
    return 0;
}