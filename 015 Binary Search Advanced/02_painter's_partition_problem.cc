#include<bits/stdc++.h>
using namespace std;
bool isPossible (vector<int> &arr, int n, int k ,int mid) {
    int sumboards = 0;
    int paintercount = 1;
    for (int i=0; i<n; i++) {
        if (sumboards + arr[i]<=mid) {
            sumboards+=arr[i];
        }
        else {
            paintercount++;
            if (arr[i]>mid || paintercount>k) return false;
            sumboards = arr[i];
        }
        if (paintercount>k) return false;
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k) {
    int n = boards.size();
    if (k>n) return -1;
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum+=boards[i];
    }
    int s = 0;
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while (s<=e) {
        if (isPossible(boards,n,k,mid)) {
            ans = mid;
            e = mid -1;
            }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main() {
    vector <int> arr = {2, 1, 5, 6, 2, 3};
    cout<<findLargestMinDistance(arr,2)<<" ";
    return 0;
}