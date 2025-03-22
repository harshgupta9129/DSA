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
int search(vector<int>& arr, int key) {
    int pivot_index = getpivotindex(arr);
    if (arr[0]<key) {
        int si=0, ei=pivot_index-1;
        while (si<=ei) {
            int mid = si + (ei-si)/2;
            if (arr[mid]==key) return mid;
            if (arr[mid]<key) si = mid+1;
            else ei = mid-1;
        }
        return -1;       
    }
    else {
        int si=pivot_index, ei=arr.size()-1;
        while (si<=ei) {
            int mid = si + (ei-si)/2;
            if (arr[mid]==key) return mid;
            if (arr[mid]<key) si = mid+1;
            else ei = mid-1;
        }
        return -1;
    }
}
int main() {
    
    return 0;
}